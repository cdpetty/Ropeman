//Word.h
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Word{
  public:
    int guess(char& g);
    bool guess(string& s);
    string get_word(){return word;}
    string get_display();
    Word();
    Word(string w);

  private:
    string word; 
    vector<char> display;
    const string default_word = "ropeman";

};

ostream& operator<<(ostream& os, const Word& w);
istream& operator>>(istream& is, Word& w);


