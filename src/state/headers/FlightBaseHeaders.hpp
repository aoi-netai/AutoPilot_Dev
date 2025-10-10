#ifndef FLIGHT_BASE_HEADERS_HPP_
#define FLIGHT_BASE_HEADERS_HPP_

#include "state/common/statebase/FlightBase.hpp"

class ManualFlightState: public FlightBase{

    public:

        ~ManualFlightState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode calcPwm(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::MANUAL_FLIGHT_STATE;}
};

class LevelTurnState: public FlightBase{

    public:

        ~LevelTurnState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode calcPwm(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::LEVEL_TURN_STATE;}
};

class ClimbingTurnState: public FlightBase{

    public:

        ~ClimbingTurnState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode calcPwm(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::CLIMBING_TURN_STATE;}
};

class FigureEightState: public FlightBase{

    public:

        ~FigureEightState() = default;

        StateErrorCode onEnter(StateContext& context) override;
        StateErrorCode calcPwm(StateContext& context) override;
        StateID decideNextState(StateContext& context) override;
        StateErrorCode onExit(StateContext& context) override;
        const StateID getStateID() const override {return StateID::FIGURE_EIGHT_STATE;}
};

#endif // FLIGHT_BASE_HEADERS_HPP_