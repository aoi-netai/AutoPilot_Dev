/* FailSafeState.cpp
*
*  フェイルセーフ処理
*/

#include "state/headers/PostFlightBaseHeaders.hpp"

StateErrorCode FailSafeState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする

    return StateErrorCode::NONE;
}

StateErrorCode FailSafeState::onUpdate(StateContext& context) {

    return StateErrorCode::NONE;
}

StateID FailSafeState::decideNextState(StateContext& context) {

    return StateID::FAIL_SAFE_STATE;
}

StateErrorCode FailSafeState::onExit(StateContext& context) {

    // 終了処理を実装（必要なら）

    return StateErrorCode::NONE;
}
