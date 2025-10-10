/* InitState.cpp
* 
*  センサーや通信の初期化チェックを行う
*  context.init_flagsを参照、更新することで判定を行う
*/

#include "state/headers/FlightBaseHeaders.hpp"

StateID ClimbingTurnState::decideNextState(StateContext& context) {

    return StateID::CLIMBING_TURN_STATE;
}

StateErrorCode ClimbingTurnState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}
