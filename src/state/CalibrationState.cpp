#include "state/headers/PreFlightHeaders.hpp"

StateID CalibrationState::decideNextState(StateContext& context) {

    return StateID::CALIBRATION_STATE;
}

StateErrorCode CalibrationState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}
