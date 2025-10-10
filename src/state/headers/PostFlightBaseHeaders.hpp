#ifndef POST_FLIGHT_BASE_HEADERS_HPP_
#define POST_FLIGHT_BASE_HEADERS_HPP_

#include "state/common/statebase/PostFlightBase.hpp"

class DisarmState: public PostFlightBase{

    public:

        ~DisarmState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::DISARM_STATE;}
};

class FailSafeState: public PostFlightBase{

    public:

        ~FailSafeState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::FAIL_SAFE_STATE;}
};

#endif // POST_FLIGHT_BASE_HEADERS_HPP_