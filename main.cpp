#include <fstream>
#include <vector>
#include <stack>

#include "State.h"
#include "Edge.h"

bool PDA(std::string word, State start_of_edge, Edge **edges, int current_letter_index, std::stack stack)
{
    if (current_letter_index == word.length() && start_of_edge.showFinal() && stack.empty()) return true;

    if (current_letter_index == word.length() && !start_of_edge.showFinal()) return false;

    for (int i = 0; i < start_of_edge.showNumberOfEdges(); i++)
    {
        if (edges[start_of_edge.showIndex()][i].showLetter()[0] == word[current_letter_index])
        {

            if(edges[start_of_edge.showIndex()][i].showPop() && !stack.empty())
            {
                for(int j = 0; j < edges[start_of_edge.showIndex()][i].showTimesToPop(); j++)
                stack.pop();
            }
            else if (edges[start_of_edge.showIndex()][i].showPop() && stack.empty()) return false;

            if(edges[start_of_edge.showIndex()][i].showPush())
            {
                std::vector<LetterToPush> letters;
                letters = edges[start_of_edge.showIndex()][i].showLettersToPush();

                for(const LetterToPush& current : letters)
                {
                    for(int k = 0; k < current.times; k++)
                    stack.push(current.letter);
                }
            }

            if (PDA(word, edges[start_of_edge.showIndex()][i].showNextState(), edges, current_letter_index + 1, stack))
                return true;
        }

    }

    return false;
}

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

            bool pop,push;
            f >> pop;
            f >> push;

            edges[current_state][current_edge].setPop(pop);
            edges[current_state][current_edge].setPush(push);

            if(push)
            {
                unsigned int how_many_letters = 0;
                f >> how_many_letters;

                edges[current_state][current_edge].setHowManyLetters(how_many_letters);

                std::vector<LetterToPush> letters;
                letters.resize(how_many_letters);

                for (LetterToPush current : letters)
                {
                    f >> current.letter;
                    f >> current.times;
                }

                edges[current_state][current_edge].setPushLetters(letters);
            }
        }
    }

    std::string word;
    f >> word;

    if (word == "#") {
        if (states[0].showFinal()) std::cout << "Cuvantul apartine alfabetului";
        else std::cout << "Cuvantul nu apartine alfabetului";
    } else {
        if (PDA(word, states[0], edges, 0, stack)) std::cout << " Cuvantul apartine alfabetului";
        else std::cout << "Cuvantul nu apartine alfabetului";
    }


    for(int i = 0; i < number_of_states; i++) delete[] edges[i];
    delete[] edges;
    return 0;
}