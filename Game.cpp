#include "Game.h"

Game::Game(){
}

/* Welcome user to game
 * Prompt user on how they want to choose word
 * choose the word
 * until he guesses correctly:
 *    prompt user to guess
 *    tell user if he was right or wrong
 *    draw new man
 * if he wins:
 *    Tell him that he won and what the word was
 * if he loses:
 *    see if he wants to guess until he gets it ||
 *    tell him the word
 * play again?
 */
void Game::play(){
  game_over = false;
  welcome();
  initialize_word(); 
  initialize_man();
  guessing_game();
}

void Game::initialize_word(){
  char input_type;
  string chosen_word;
  cout << "Type 'i' to input your own word, or 'd' to pull a random word from a dictionary" << endl;
  cin >> input_type;
  if (input_type == 'i') cout << "Input word: "; 
  else if (input_type == 'd') throw Err;
  cin >> word;
}

void Game::initialize_man(){
  m = Man()  
}

void Game::guessing_game(){
  while (!game_over){
    string guess;
    cout << m  << w << "\n Input Guess: ";
    cin >> guess;
    int num_occur = w.guess(guess);  //Always calls string guess function
    if (num_occur == 0){
      cout << "The letter '" << guess << "' is not in the word." << endl;
      m.increment_stage();
    }
    else{
      cout << "The letter '" << guess << "' occured " << num_occor << " time." << endl; 
    }
    update_game_state();
  }
  cout << "Good Game! Play again?"
}

void Game::update_game_state(){
  if (m.is_over())
    game_over = true;
}
//Non-class functions
void welcome(){
  cout << "Welcome to ropeman!" << endl;
  cout << "   Written and created by Clayton Petty" << endl;
  cout << "Here's how to play:" << endl;
  cout << " 1. Choose a word." << endl;
  cout << " 2. Guess the letters in the word before all of Ropeman's body parts are drawn." << endl;
  cout << " 3. *Note* You can guess letters, or full words" << endl;
}
