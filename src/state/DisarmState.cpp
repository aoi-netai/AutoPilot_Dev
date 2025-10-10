/* DisarmState.cpp
*
*  着陸・それに伴う処理
*/

#include "state/headers/PostFlightBaseHeaders.hpp"

StateErrorCode DisarmState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする

    return StateErrorCode::NONE;
}

StateErrorCode DisarmState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}

StateID DisarmState::decideNextState(StateContext& context) {

    return StateID::DISARM_STATE;
}

StateErrorCode DisarmState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
