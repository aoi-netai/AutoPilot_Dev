#include "state/headers/FlightBaseHeaders.hpp"

StateID ManualFlightState::decideNextState(StateContext& context) {

    return StateID::MANUAL_FLIGHT_STATE;
}

StateErrorCode ManualFlightState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}
