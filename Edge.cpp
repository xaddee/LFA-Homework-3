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

void Edge::setNextState(State next_state)
{
    _next_state = next_state;
}

void Edge::setPop(bool pop)
{
    _pop = pop;
}

void Edge::setPush(bool push)
{
    _push = push;
}

void Edge::setPopLetters(std::string letters)
{
    _pop_letters = letters;
}

void Edge::setPushLetters(std::string letters)
{
    _push_letters = letters;
}

std::string Edge::showPopLetters()
{
    return _pop_letters;
}

std::string Edge::showPushLetters()
{
    return _push_letters;
}