#ifndef PRE_FLIGHT_HEADERS_HPP_
#define PRE_FLIGHT_HEADERS_HPP_

#include "state/common/statebase/PreFlightBase.hpp"

class InitState: public PreFlightBase{

    public:

        ~InitState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::INIT_STATE;}
};

class CalibrationState: public PreFlightBase{

    public:

        ~CalibrationState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::CALIBRATION_STATE;}
};

class PreFlightState: public PreFlightBase{

    public:

        ~PreFlightState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode onUpdate(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::PRE_FLIGHT_STATE;}
};

#endif // PRE_FLIGHT_HEADERS_HPP_