#include "state/headers/AutoFlightBaseHeaders.hpp"

StateID AutoFlightState::decideNextState(StateContext& context) {

    return StateID::AUTO_FLIGHT_STATE;
}

StateErrorCode AutoFlightState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
