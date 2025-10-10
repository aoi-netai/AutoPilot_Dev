#include "AutoFlightBase.hpp"

StateErrorCode AutoFlightBase::enter(StateContext& context) {

    onEnter(context);

    return StateErrorCode::NONE;
}

StateResult AutoFlightBase::update(StateContext& context) {

    StateResult result;

    // 次の状態を決定
    result.next_state = decideNextState(context);

    // 状態が変化したかどうかを判定
    if (result.next_state != getStateID()) {

        result.is_state_changed = true;
    }

    // 共通処理（各状態処理の前に行う）


    // 各状態での処理
    result.error_code = onUpdate(context);
    

    // 共通処理（各状態処理の後に行う）

    return result;
}

StateErrorCode AutoFlightBase::exit(StateContext& context) {

    onExit(context);

    return StateErrorCode::NONE;
}
