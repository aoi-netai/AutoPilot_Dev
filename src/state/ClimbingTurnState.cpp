/* ClimbingTurnState.cpp
*
*  上昇旋回
*/

#include "state/headers/FlightBaseHeaders.hpp"

StateErrorCode ClimbingTurnState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする

    return StateErrorCode::NONE;
}

StateErrorCode ClimbingTurnState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}

StateID ClimbingTurnState::decideNextState(StateContext& context) {

    return StateID::CLIMBING_TURN_STATE;
}

StateErrorCode ClimbingTurnState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
