/* PreFlightState.cpp
*
*  PreFlight 操作の一部処理
*/

#include "state/headers/PreFlightHeaders.hpp"

StateErrorCode PreFlightState::onEnter(StateContext& context) {

    // この状態に入るときの初期化処理を実装（必要なら）

    return StateErrorCode::NONE;
}

StateErrorCode PreFlightState::onUpdate(StateContext& context) {

    // 特にすることないかも
    // LED点滅させておいたら、飛べるよっていうのがわかりやすいかも

    return StateErrorCode::NONE;
}

StateID PreFlightState::decideNextState(StateContext& context) {

    // プロポのスイッチやスティックを確認して、飛行状態への移行を判定

    return StateID::PRE_FLIGHT_STATE;
}

StateErrorCode PreFlightState::onExit(StateContext& context) {

    // 終了処理を実装
    // 次が飛行系の状態に行くので、PIDやmadgwickのリセットなどをしたほうがいいかも

    return StateErrorCode::NONE;
}
