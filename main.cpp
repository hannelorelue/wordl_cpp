#include <iostream>
#include "word_game.hpp"

using namespace std;

int main()
{
    cout << "Welcome to wordle!" << endl;
    word_game wg = word_game("guess", 6);
    cout << "g u r k e "<< endl;
    cout << wg.play("gurke");

    return 0;
}
