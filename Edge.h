//
// Created by Adelin on 5/16/2018.
//

#ifndef LFA_HOMEWORK_3_EDGE_H
#define LFA_HOMEWORK_3_EDGE_H

#include <iostream>
#include <string>
#include "State.h"

class Edge {

    State _current_state;
    State _next_state;

    std::string _letter;
    std::string _content;
    std::string _push_or_pop;

public:
   inline Edge() { _letter = "#"; _content = ""; _push_or_pop = "";};
    ~Edge() = default;

    void setCurrentState(State);
    void setNextState(State);
    void setLetter(std::string);
    void pushOrPop(std::string);
    void whatToPushOrPop(std::string);

    State showCurrentState();
    State showNextState();

    std::string showLetter();
    std::string showPushOrPop();
    std::string showWhatToPushOrPop();
};


#endif //LFA_HOMEWORK_3_EDGE_H
