#include "state/headers/PostFlightBaseHeaders.hpp"

StateID DisarmState::decideNextState(StateContext& context) {

    return StateID::DISARM_STATE;
}

StateErrorCode DisarmState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
