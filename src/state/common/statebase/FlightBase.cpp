#include "FlightBase.hpp"

StateErrorCode FlightBase::enter(StateContext& context) {

    onEnter(context);

    return StateErrorCode::NONE;
}

StateResult FlightBase::update(StateContext& context) {

    StateResult result;

    // 次の状態を決定
    result.next_state = decideNextState(context);

    // 状態が変化したかどうかを判定
    if (result.next_state != getStateID()) {

        result.is_state_changed = true;
    }

    // センサーデータの取得
    getSensorData(context);

    // 姿勢の計算
    calcAttitude(context);

    // 各状態での処理（PID・PWM計算）
    result.error_code = calcPwm(context);
    
    // PWMの出力
    generatePwm(context);

    return result;
}

StateErrorCode FlightBase::exit(StateContext& context) {

    onExit(context);

    return StateErrorCode::NONE;
}

StateErrorCode FlightBase::getSensorData(StateContext& context) {

    // センサーからデータを取得して context に格納する処理を実装

    return StateErrorCode::NONE;
}

StateErrorCode FlightBase::calcAttitude(StateContext& context) {

    // センサーのデータから姿勢を計算して context に格納する処理を実装

    return StateErrorCode::NONE;
}

StateErrorCode FlightBase::generatePwm(StateContext& context) {

    // calcPwm() で決定されたPWM値をモーターに送信する処理を実装

    return StateErrorCode::NONE;
}
