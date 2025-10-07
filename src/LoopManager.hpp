#ifndef LOOP_MANAGER_HPP
#define LOOP_MANAGER_HPP

// ループ管理クラス
class LoopManager {

    public: 
        
        LoopManager() = default;
        ~LoopManager() = default;

        // 待機フラグのセット
        void SetWaitFlag(){
            
            wait_flag = true; 
        }

        // 待機フラグのクリア
        void ClearWaitFlag(){

            wait_flag = false;
        }

        // 待機フラグの取得
        bool GetWaitFlag(){ 

            return wait_flag; 
        }

    private:

        bool wait_flag = false;
};

#endif // LOOP_MANAGER_HPP