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

StateID CalibrationState::decideNextState(StateContext& context) {




    return StateID::CALIBRATION_STATE;
}

StateErrorCode CalibrationState::onUpdate(StateContext& context) {



    return StateErrorCode::NONE;
}
