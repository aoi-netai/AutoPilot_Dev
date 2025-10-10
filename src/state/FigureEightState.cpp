/* FigureEightState.cpp
*
*  8の字飛行
*/

#include "state/headers/FlightBaseHeaders.hpp"

StateErrorCode FigureEightState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする

    return StateErrorCode::NONE;
}

StateErrorCode FigureEightState::calcPwm(StateContext& context) {

    return StateErrorCode::NONE;
}

StateID FigureEightState::decideNextState(StateContext& context) {

    return StateID::FIGURE_EIGHT_STATE;
}

StateErrorCode FigureEightState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
