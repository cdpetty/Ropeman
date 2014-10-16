#include "Game.h"

Game::Game(){
}

void Game::play(){
  
}


void Game::init(){
  w(get_word());
  m(0);
}

void Game::terminate(){

}

string get_word(){
  //Allow for dictionary later
  string w;
  cout<< "What word do you want to try and guess:" << endl;
  cin >> w;
  return w;

}
