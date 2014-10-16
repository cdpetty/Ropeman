//Game.h
#include <vector>
#include "Man.h"
#include "Word.h"

using namespace std;

class Game{
  public:
    Game();
    void play(); 
    void initialize_word();
    void initialize_man();
    void guessing_game();
    void update_game_state();
    class Err { };
  
  private:
    vector<char> guesses;
    bool game_over;
    Word w;
    Man m;
    //Dictionary dict;
};
