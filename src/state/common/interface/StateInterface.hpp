/* StateInterface.hpp
*/

#ifndef STATE_INTERFACE_HPP_
#define STATE_INTERFACE_HPP_

#include "state/common/StateUtility.hpp"
#include "state/common/StateContext.hpp"

class StateInterface {

    public:

        virtual ~StateInterface() = default;

        // 状態更新用
        virtual StateResult update(StateContext& context) = 0;

        // 状態に入るときの処理（起動や初期化など）
        virtual StateErrorCode enter(StateContext& context) = 0;

        // 状態を出るときの処理（リセットやクリーンアップなど）
        virtual StateErrorCode exit(StateContext& context) = 0;

        virtual const StateID getStateID() const = 0;
};

#endif /* STATE_INTERFACE_HPP_ */
