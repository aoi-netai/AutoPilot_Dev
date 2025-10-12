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
        StateManager(StateID init_state_id, unsigned long defalut_loop_time_us = 1000);

        // デストラクタ
        ~StateManager() = default;
            
        // メインループ
        void update();

        void failsafe(); // 強制的にFailSafeStateに遷移する

    private:

        // 時間管理
        bool checkLoopTime();

        // 状態遷移
        void changeState(std::unique_ptr<StateInterface> newState);

        // 状態IDから状態クラスのオブジェクトを生成する関数
        std::unique_ptr<StateInterface> createState(StateID state_id);

        // 現在の状態を保持するポインタ
        std::unique_ptr<StateInterface> current_state;

        // StateContext をオブジェクトとして保持し、各状態処理に参照で渡す
        StateContext state_context;

        unsigned long defalut_loop_time_us = 1000; // ループ時間（マイクロ秒）
        unsigned long last_update_time_us = 0; // 最後の更新時間（マイクロ秒）
        unsigned long delta_time_us = 0; // 前回からの経過時間（マイクロ秒）
        uint8_t loop_overrun_count = 0; // ループ時間超過カウンタ
};

#endif // STATE_MANAGER_HPP