#include "state/headers/PreFlightHeaders.hpp"

StateID PreFlightState::decideNextState(StateContext& context) {

    return StateID::PRE_FLIGHT_STATE;
}

StateErrorCode PreFlightState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
