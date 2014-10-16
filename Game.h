//Game.h
#include <vector>
#include "Man.h"
#include "Word.h"

using namespace std;

class Game{
  public:
    Game();
    void play(); 
    void terminate();
  
  private:
    vector<char> guesses;
    Word w;
    Man m;
    //Dictionary dict;
};