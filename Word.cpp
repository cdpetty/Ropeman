//Word.cpp
#include "Word.h"

using namespace std;

Word::Word(){
  word = default_word;
  for(char a: default_word){
    display.push_back('_'); 
  }
}

Word::Word(string w){
  sanitize_string(w);
  word = w;
  for(char a: w){
    display.push_back('_'); 
  }
}

int Word::guess(char& g){
  int num_occurences = 0; 
  string helper = word;
  g = toupper(g);
  while (helper.find(g) != string::npos){
    ++num_occurences;
    display[word.find(g)] = g;
    helper = helper.substr(word.find(g));
  }
  return num_occurences; 
}

bool Word::guess(string& s){
  sanitize_string(s);
  if (s==word)
    return true;
  return false;
}

string Word::get_display(){
  return str(display.begin(), display.end());
}

ostream& operator<<(ostream& os, const Word& w){
  return os << w.get_display();
}

istream& operator>>(istream& is, Word& w){
  string chosen_word;
  is >> chosen_word;
  if (!is) return is; //What does this line do?
  w = Word(chosen_word) 
  return is;
}

void sanitize_string(string& s){
  int counter = 0;
  for(char x : s){
    s[counter] = toupper(x); 
    ++counter;
  }
}
