#include "state/headers/FlightBaseHeaders.hpp"

StateID ManualFlightState::decideNextState(StateContext& context) {

    return StateID::MANUAL_FLIGHT_STATE;
}

StateErrorCode ManualFlightState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
