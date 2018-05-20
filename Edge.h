//
// Created by Adelin on 5/16/2018.
//

#ifndef LFA_HOMEWORK_3_EDGE_H
#define LFA_HOMEWORK_3_EDGE_H

#include <iostream>
#include <string>
#include <vector>
#include "State.h"

struct LetterToPush
{
    std::string letter;
    int times;
};

class Edge {

    State _current_state;
    State _next_state;

    std::string _letter;
    bool _pop;
    int _times_to_pop;
    bool _push;

    unsigned int _how_many_letters;
    std::vector<LetterToPush> _push_letters;

public:
   inline Edge() { _letter = "#"; _pop =  false; _push =  false; _times_to_pop = 0; _how_many_letters = 0; _push_letters.resize(_how_many_letters)};
    ~Edge() = default;

    void setCurrentState(State);
    void setNextState(State);
    void setLetter(std::string);
    void setPop(bool);
    void setPush(bool);
    void setTimesToPop(int);
    void setHowManyLetters(unsigned int);
    void setPushLetters(std::vector<LetterToPush>);

    State showCurrentState();
    State showNextState();

    bool showPop();
    bool showPush();

    int showTimesToPop();
    int showHowManyLetters();
    std::vector<LetterToPush> showLettersToPush();

    std::string showLetter();
    std::string showPushLetters();
};


#endif //LFA_HOMEWORK_3_EDGE_H
