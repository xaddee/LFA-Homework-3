#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <string>

#include "State.h"

int main() {

    std::ifstream f("date.txt");

    int number_of_states;
    f >> number_of_states;

    State* states;
    states = new State[number_of_states];

    for(int i = 0; i < number_of_states; i++)
    {
        states[i].setIndex(i);

        bool is_final;
        f >> is_final;
        states[i].setFinal(is_final);

    }

    return 0;
}