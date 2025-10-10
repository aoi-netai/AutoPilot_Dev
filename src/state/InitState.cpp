/* InitState.cpp
* 
*  onEnter()で起動時の処理（全体で使うインスタンスの生成をする）

*  センサーや通信の初期化チェックを行う
*  context.init_flagsを参照、更新することで判定を行う
*
*  判定が成功したらCalibrationStateに遷移する
*/

#include "state/headers/PreFlightHeaders.hpp"

StateErrorCode InitState::onEnter(StateContext& context) {

    // 起動時の処理（ここは全体の実行の中で１回しか呼ばれない）
    // いくつかの状態で使用するインスタンスの生成を行う（センサーやPWMなど）

    return StateErrorCode::NONE;
}

StateID InitState::decideNextState(StateContext& context) {

    // context.init_flagsの必要項目がtrueになっていることを判定

    return StateID::INIT_STATE;
}

StateErrorCode InitState::onUpdate(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする
    // 失敗したら早期にreturnして、次のループで再度初期化を試みる

    return StateErrorCode::NONE;
}

StateErrorCode InitState::onExit(StateContext& context) {

    // 終了処理を実装（LEDをつけるなど?）
    return StateErrorCode::NONE;
}
