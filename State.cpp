//
// Created by Adelin on 5/16/2018.
//

#include "State.h"

void State::setFinal(bool is_final)
{
    _is_final = is_final;
}

void State::setIndex(int index)
{
    _index = index;
}

int State::showIndex()
{
    return _index;
}

bool State::showFinal()
{
    return _is_final;
}

void State::setNumberOfEdges(int number)
{
    _number_of_edges = number;
}

int State::showNumberOfEdges()
{
    return _number_of_edges;
}