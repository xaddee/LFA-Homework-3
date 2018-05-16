//
// Created by Adelin on 5/16/2018.
//

#ifndef LFA_HOMEWORK_3_STATES_H
#define LFA_HOMEWORK_3_STATES_H


class State {

    int _index;
    bool _is_final = false;

public:
    void setFinal(bool);
    void setIndex(int);

    bool showFinal();
    int showIndex();

};


#endif //LFA_HOMEWORK_3_STATES_H
