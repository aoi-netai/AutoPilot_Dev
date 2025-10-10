/* ManualFlightState.cpp
*
*  手動飛行処理
*  共通処理でセンサーデータの取得やPWMの生成は行われているので
*  ここでは、センサーデーターなどを参照して、各軸のPID制御を行いPWMの値を決定する
*/

#include "state/headers/FlightBaseHeaders.hpp"

StateErrorCode ManualFlightState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // ミッション状態を示すLEDをつける

    return StateErrorCode::NONE;
}

StateErrorCode ManualFlightState::calcPwm(StateContext& context) {

    // contextのデータを参照して、各軸のPID制御を行いPWMの値を決定する処理を実装
    // PWMの値はcontextに格納する

    return StateErrorCode::NONE;
}

StateID ManualFlightState::decideNextState(StateContext& context) {

    // DisArmの判定と各ミッションへの遷移を実装

    return StateID::MANUAL_FLIGHT_STATE;
}

StateErrorCode ManualFlightState::onExit(StateContext& context) {

    // 終了処理を実装
    // ミッション状態を示すLEDをけす

    return StateErrorCode::NONE;
}
