#ifndef INC_STATE_UTILITY_HPP_
#define INC_STATE_UTILITY_HPP_

#include <cstdint>

// 状態IDの定義
enum class StateID : uint8_t {

    // PreFlight
    INIT_STATE,
    CALIBRATION_STATE,
    PRE_FLIGHT_STATE,

    // ManualFlight
    MANUAL_FLIGHT_STATE,
    LEVEL_TURN_STATE,
    CLIMBING_TURN_STATE,
    FIGURE_EIGHT_STATE,

    // AutoFlight
    AUTO_FLIGHT_STATE,

    // PostFlight
    FAIL_SAFE_STATE,
    DISARM_STATE
};

enum class StateErrorCode : uint8_t {

    NONE = 0,
};

struct StateResult {

    StateID next_state;
    StateErrorCode error_code;
    bool is_state_changed;
}; 

#endif /* INC_STATE_UTILITY_HPP_ */