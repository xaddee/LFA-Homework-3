//
// Created by Adelin on 5/16/2018.
//

#include "State.h"

void State::setFinal(bool is_final)
{
    _is_final = a;
}

void State::setIndex(int index)
{
    _index = index;
}

int showIndex()
{
    return _index;
}

bool State::showFinal()
{
    return _is_final;
}