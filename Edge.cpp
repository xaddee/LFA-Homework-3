//
// Created by Adelin on 5/16/2018.
//

#include "Edge.h"

void Edge::setCurrentState(State current)
{
    _current_state = current;
}

void Edge::setLetter(std::string letter)
{
    _letter = letter;
}

void Edge::pushOrPop(std::string push_or_pop)
{
    _push_or_pop = push_or_pop;
}

void Edge::whatToPushOrPop(std::string content)
{
    _content = content;
}

State Edge::showCurrentState()
{
    return _current_state;
}

State Edge::showNextState()
{
    return _next_state;
}

std::string Edge::showLetter()
{
    return _letter;
}

std::string Edge::showPushOrPop()
{
    return _push_or_pop;
}

std::string Edge::showWhatToPushOrPop()
{
    return _content;
}

void Edge::setNextState(State next_state)
{
    _next_state = next_state;
}