#include "state/headers/FlightBaseHeaders.hpp"

StateID LevelTurnState::decideNextState(StateContext& context) {

    return StateID::LEVEL_TURN_STATE;
}

StateErrorCode LevelTurnState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}
