#include "state/headers/PostFlightBaseHeaders.hpp"

StateID FailSafeState::decideNextState(StateContext& context) {

    return StateID::FAIL_SAFE_STATE;
}

StateErrorCode FailSafeState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
