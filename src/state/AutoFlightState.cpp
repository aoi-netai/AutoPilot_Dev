/* AutoFlightState.cpp
*
*   自動操縦
*/

#include "state/headers/AutoFlightBaseHeaders.hpp"

StateErrorCode AutoFlightState::onEnter(StateContext& context) {

    // 初期化処理を実装
    return StateErrorCode::NONE;
}

StateErrorCode AutoFlightState::onUpdate(StateContext& context) {
    

    return StateErrorCode::NONE;
}

StateID AutoFlightState::decideNextState(StateContext& context) {

    return StateID::AUTO_FLIGHT_STATE;
}

StateErrorCode AutoFlightState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
