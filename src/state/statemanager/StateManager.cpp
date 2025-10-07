#include "StateManager.hpp"
#include <cstdio>

#include "state/headers/PreFlightHeaders.hpp"
#include "state/headers/FlightBaseHeaders.hpp"
#include "state/headers/PostFlightBaseHeaders.hpp"
#include "state/headers/AutoFlightBaseHeaders.hpp"

// コンストラクタ
StateManager::StateManager(StateID init_state_id) {

    // 移入された状態を current_state に設定
    current_state = createState(init_state_id);

    // enter を呼ぶ
    if (current_state) {

        current_state->enter(state_context);
    }
}

// 状態遷移
void StateManager::changeState(std::unique_ptr<StateInterface> new_state) {

    // 現在の状態の終了処理（exit関数の呼び出し）
    if (current_state) {

        current_state->exit(state_context);
        
        // 状態遷移メッセージの出力(デバッグ用)
        printf("[StateManager] StateExit: %d\n", static_cast<int>(current_state->getStateID()));
    }



    // 新しい状態クラスのオブジェクトのポインタを代入
    current_state = std::move(new_state);

    // 新しい状態の開始処理（enter関数の呼び出し）
    if (current_state) {

        current_state->enter(state_context);

        // 状態遷移メッセージの出力(デバッグ用)
        printf("[StateManager] StateEnter: %d\n", static_cast<int>(current_state->getStateID()));
    }
}

// メインループの更新処理
void StateManager::update() {

    if (current_state) {

        // 現在状態の更新処理
        StateResult result = current_state->update(state_context);

        // 状態遷移が発生した場合
        if (result.is_state_changed) {
            
            // 状態を変更
            changeState(createState(result.next_state));
        }
    }
}

// 状態IDから状態クラスのオブジェクトを生成
std::unique_ptr<StateInterface> StateManager::createState(StateID state_id) {

    switch (state_id) {

        case StateID::INIT_STATE:
            return std::make_unique<InitState>();

        case StateID::CALIBRATION_STATE:
            return std::make_unique<CalibrationState>();

        case StateID::PRE_FLIGHT_STATE:
            return std::make_unique<PreFlightState>();

        case StateID::MANUAL_FLIGHT_STATE:
            return std::make_unique<ManualFlightState>();

        case StateID::LEVEL_TURN_STATE:
            return std::make_unique<LevelTurnState>();

        case StateID::CLIMBING_TURN_STATE:
            return std::make_unique<ClimbingTurnState>();

        case StateID::FIGURE_EIGHT_STATE:
            return std::make_unique<FigureEightState>();

        case StateID::AUTO_FLIGHT_STATE:
            return std::make_unique<AutoFlightState>();

        case StateID::DISARM_STATE:
            return std::make_unique<DisarmState>();

        case StateID::FAIL_SAFE_STATE:
            return std::make_unique<FailSafeState>();

    }

    return nullptr;
}