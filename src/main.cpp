#include "state/statemanager/StateManager.hpp"

StateManager stateManager(StateID::INIT_STATE, 1000);// 1msごとにループ

void setup() {

}

void loop() {

  stateManager.update();
}

// SBUS割り込みでfailsafe検知した場合はstateManager.failsafe()を呼び出すこと 