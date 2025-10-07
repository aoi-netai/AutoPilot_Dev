/* PreFlightBase.hpp
*
* すべてのPreFlight状態の基底クラス（部分実装付きの抽象基底クラス）
*/

#ifndef PRE_FLIGHT_BASE_HPP_
#define PRE_FLIGHT_BASE_HPP_

#include "state/common/interface/StateInterface.hpp"
#include "state/common/StateUtility.hpp"
#include "state/common/StateContext.hpp"

class PreFlightBase: public StateInterface {

    public:

        ~PreFlightBase() = default;

        // 状態更新用
        StateResult update(StateContext& context) override;

        // 状態に入るときの処理（起動や初期化など）
        StateErrorCode enter(StateContext& context) override;

        // 状態を出るときの処理（リセットやクリーンアップなど）
        StateErrorCode exit(StateContext& context) override;

    protected:
        
        // 状態IDの取得
        virtual const StateID getStateID() const = 0;

        // 各状態での処理
        virtual StateErrorCode onUpdate(StateContext& context) = 0;

        // 各状態での状態遷移処理
        virtual StateID decideNextState(StateContext& context) = 0;     
};

#endif /* PRE_FLIGHT_BASE_HPP_ */
