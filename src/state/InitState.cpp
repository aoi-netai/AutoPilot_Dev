#include "state/headers/PreFlightHeaders.hpp"

StateID InitState::decideNextState(StateContext& context) {

    return StateID::INIT_STATE;
}

StateErrorCode InitState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
