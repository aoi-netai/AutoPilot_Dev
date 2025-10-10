#ifndef AUTO_FLIGHT_BASE_HEADERS_HPP_
#define AUTO_FLIGHT_BASE_HEADERS_HPP_

#include "state/common/statebase/AutoFlightBase.hpp"

class AutoFlightState: public AutoFlightBase{

    public:

        ~AutoFlightState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::AUTO_FLIGHT_STATE;}
};

#endif // AUTO_FLIGHT_BASE_HEADERS_HPP_