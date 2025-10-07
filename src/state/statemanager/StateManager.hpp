#ifndef STATE_MANAGER_HPP
#define STATE_MANAGER_HPP

#include <memory>
#include "state/common/interface/StateInterface.hpp"
#include "state/common/StateContext.hpp"
#include "state/common/StateUtility.hpp"

// 状態管理クラス
class StateManager {

    public:

        // コンストラクタ 初期状態を設定
        StateManager(StateID init_state_id);

        // デストラクタ
        ~StateManager() = default;
            
        // メインループ
        void update();

    private:

        // 状態遷移
        void changeState(std::unique_ptr<StateInterface> newState);

        // 状態IDから状態クラスのオブジェクトを生成する関数
        std::unique_ptr<StateInterface> createState(StateID state_id);

        // 現在の状態を保持するポインタ
        std::unique_ptr<StateInterface> current_state;

        // StateContext をオブジェクトとして保持し、各状態処理に参照で渡す
        StateContext state_context;
};

#endif // STATE_MANAGER_HPP