#include "state/headers/FlightBaseHeaders.hpp"

StateID FigureEightState::decideNextState(StateContext& context) {

    return StateID::FIGURE_EIGHT_STATE;
}

StateErrorCode FigureEightState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
