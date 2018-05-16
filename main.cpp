#include <fstream>
#include <vector>
#include <stack>

#include "State.h"
#include "Edge.h"

// empty word is '#'
int main() {

    std::ifstream f("date.txt");

    unsigned int number_of_states;
    f >> number_of_states;

    std::vector<State> states;
    states.resize(number_of_states);

    std::stack<std::string> stack;
    stack.push("s");

    int index = 0;
    for(State current_state : states)
    {
        current_state.setIndex(index);
        index ++;

        bool is_final;
        f >> is_final;
        current_state.setFinal(is_final);
    }

    Edge **edges;
    edges = new Edge*[number_of_states];

    for(int current_state = 0; current_state < number_of_states; current_state++)
    {
        int number_of_edges;
        f >> number_of_edges;

        states[current_state].setNumberOfEdges(number_of_edges);
        edges[current_state] = new Edge[number_of_edges];
    }

    for(int current_state = 0; current_state < number_of_states; current_state++)
    {
        for(int current_edge = 0; current_edge < states[current_state].showNumberOfEdges(); current_edge++)
        {
            //Citire si setare litera
            std::string letter;
            f >> letter;
            edges[current_state][current_edge].setLetter(letter);
            edges[current_state][current_edge].setCurrentState(states[current_state]);

            int next_state_index;
            f >> next_state_index;

            edges[current_state][current_edge].setNextState(states[next_state_index]);
        }
    }






    for(int i = 0; i < number_of_states; i++) delete[] edges[i];
    delete[] edges;
    return 0;
}