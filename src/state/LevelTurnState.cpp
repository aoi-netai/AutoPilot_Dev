/* LevelTurnState.cpp
*
*  水平旋回処理
*/

#include "state/headers/FlightBaseHeaders.hpp"

StateErrorCode LevelTurnState::onEnter(StateContext& context) {


    return StateErrorCode::NONE;
}

StateErrorCode LevelTurnState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}

StateID LevelTurnState::decideNextState(StateContext& context) {

    return StateID::LEVEL_TURN_STATE;
}

StateErrorCode LevelTurnState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
