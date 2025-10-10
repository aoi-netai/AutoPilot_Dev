/* InitState.cpp
* 
*  センサーや通信の初期化チェックを行う
*  context.init_flagsを参照、更新することで判定を行う
*
*  判定が成功したらCalibrationStateに遷移する
*/

#include "state/headers/PreFlightHeaders.hpp"

StateID InitState::decideNextState(StateContext& context) {

    // context.initflgsの必要項目がtrueになっていることを判定

    return StateID::INIT_STATE;
}

StateErrorCode InitState::onUpdate(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする


    return StateErrorCode::NONE;
}
