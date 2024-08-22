#include "word_game.hpp"
#include <iostream>
#include <string>


word_game::word_game(std::string word, int tries) {
    solution = word;
    max_tries = tries;
}

std::string word_game::play(std::string guess){

    std::string output ="";

    for (auto c : guess) {
        size_t c_position = guess.find(c);
        size_t position = solution.find(c);
        //std::cout << position << std::endl;
        if (position != std::string::npos) {
            if(position == c_position){
                output.push_back('*');
            } else {
                output.push_back('+');
            }
            //current_state.insert(current_state.begin(),position,c);
        } else {
            output.push_back('-');
        }
        output.push_back(' ');
    }
    return output;
}
