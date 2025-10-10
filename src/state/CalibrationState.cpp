/* CalibrationState.cpp
* 
*  センサーのキャリブレーションを行う
*  基本的にはセンサーライブラリ内のoffset変数やセンサーのoffsetレジスタを更新することが望ましい
*
*  動的なキャリブレーション（地磁気など）を行う場合は、一定範囲に収束するまで次の条件に遷移しないようにもできる
*
*  判定が成功したらPreFlightStateに遷移する
*/

#include "state/headers/PreFlightHeaders.hpp"

StateErrorCode CalibrationState::onEnter(StateContext& context) {

    // 初期化処理を実装
    // 成功したらcontext.init_flagsの必要項目をtrueにする

    return StateErrorCode::NONE;
}

StateErrorCode CalibrationState::onUpdate(StateContext& context) {

    // キャリブレーション処理を実装
    // 動的なキャリブレーションを行う場合は、一定範囲に収束するまで次の条件に遷移しないようにもできる

    return StateErrorCode::NONE;
}

StateID CalibrationState::decideNextState(StateContext& context) {

    // キャリブレーションが完了したらPreFlightStateに遷移
    // キャリブレーションの終了判定はonUpdateの実装に依存

    return StateID::CALIBRATION_STATE;
}

StateErrorCode CalibrationState::onExit(StateContext& context) {

    // 終了処理を実装（飛行可能を示すLEDをつけてもいいかも）
    // 時間のかかるESCの初期化をしておくとよさそう
    // ESCの初期化が終わったらモーターが回らないpwmの値を送っておく

    return StateErrorCode::NONE;
}
