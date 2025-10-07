#include "state/headers/FlightBaseHeaders.hpp"

StateID ClimbingTurnState::decideNextState(StateContext& context) {

    return StateID::CLIMBING_TURN_STATE;
}

StateErrorCode ClimbingTurnState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
