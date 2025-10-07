#include "state/headers/FlightBaseHeaders.hpp"

StateID LevelTurnState::decideNextState(StateContext& context) {

    return StateID::LEVEL_TURN_STATE;
}

StateErrorCode LevelTurnState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
