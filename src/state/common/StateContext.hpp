#ifndef STATE_CONTEXT_HPP_
#define STATE_CONTEXT_HPP_

#include <cstdint>

struct InitFlags{

    bool sbus_firstdata_received = false;
    bool imu_initialized = false;
    bool baro_initialized = false;
};

// SBUSデータ構造体
struct SbusData {

    uint8_t raw_sbus[25] = {}; // Raw SBUS data
    uint16_t channels[16] = {}; // 16 channels
    bool failsafe = false;      // Failsafe status
    bool lost_frame = false;    // Frame lost status
};

// センサーデータ構造体
struct SensorData{

    float accel[3] = {};
    float gyro[3] = {};
    float mag[3] = {};
    float pressure = 0.0f;
    float temperature = 0.0f;
    float tof_distance = 0.0f;
};

// 姿勢データ構造体
struct AttitudeData{

    float angle[3] = {};
    float rate[3] = {};
    float altitude = 0.0f;
};

// PWMデータ構造体
struct PwmData{

    // throttle, roll, pitch, yaw
    uint16_t pwm[4] = {};
};

// 状態間で共有する変数やインスタンス
struct StateContext {

    uint32_t loop_count = 0; // デバック用 実装の際には各状態のメンバーで持ってください


    SbusData sbus_data;
    InitFlags init_flags;
    SensorData sensor_data;
    AttitudeData attitude_data;
    PwmData pwm_data;
};


#endif // STATE_CONTEXT_HPP_
