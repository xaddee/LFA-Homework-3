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

bool Edge::showPop()
{
    return _pop;
}

bool Edge::showPush()
{
    return _push;
}

void Edge::setTimesToPop(int times)
{
    _times_to_pop = times;
}

void Edge::setHowManyLetters(unsigned int number_of_letters)
{
    _how_many_letters = number_of_letters;
}

void Edge::setPushLetters(std::vector<LetterToPush> letters)
{
    _push_letters = letters;
}

int Edge::showTimesToPop()
{
    return _times_to_pop;
}

int Edge::showHowManyLetters()
{
    return _how_many_letters;
}

std::vector<LetterToPush> Edge::showLettersToPush()
{
    return _push_letters;
}