#ifndef WORD_GAME_HPP
#define WORD_GAME_HPP

#include <string>

class word_game
{
private:
    std::string solution;
    std::string current_state;
    int max_tries;
    int curren_tries;

public:
    word_game(std::string word, int tries);
    std::string play(std::string guess);
};

#endif // WORD_GAME_HPP
