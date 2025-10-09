#include "state/headers/PreFlightHeaders.hpp"

StateID InitState::decideNextState(StateContext& context) {

    // context.initflgs

    return StateID::INIT_STATE;
}

StateErrorCode InitState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
