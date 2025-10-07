#include <Arduino.h>

#include "state/statemanager/StateManager.hpp"

StateManager stateManager(StateID::INIT_STATE);

void setup() {


}

void loop() {

  stateManager.update();
}