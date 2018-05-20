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
    bool _pop;
    bool _push;

    std::string _pop_letters;
    std::string _push_letters;

public:
   inline Edge() { _letter = "#"; _pop =  false; _push =  false;};
    ~Edge() = default;

    void setCurrentState(State);
    void setNextState(State);
    void setLetter(std::string);
    void setPop(bool);
    void setPush(bool);
    void setPopLetters(std::string);
    void setPushLetters(std::string);

    State showCurrentState();
    State showNextState();

    std::string showLetter();
    std::string showPopLetters();
    std::string showPushLetters();
};


#endif //LFA_HOMEWORK_3_EDGE_H
