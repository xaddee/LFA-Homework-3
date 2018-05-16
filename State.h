//
// Created by Adelin on 5/16/2018.
//

#ifndef LFA_HOMEWORK_3_STATES_H
#define LFA_HOMEWORK_3_STATES_H


class State {

    int _index;
    int _number_of_edges;
    bool _is_final;


public:
    inline State() {_index = -1; _is_final = false;};
    ~State() = default;
    void setFinal(bool);
    void setIndex(int);
    void setNumberOfEdges(int);

    bool showFinal();
    int showIndex();
    int showNumberOfEdges();

};


#endif //LFA_HOMEWORK_3_STATES_H
