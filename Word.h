//Word.h
#include <string>
#include <vector>

class Word{
  public:
    bool guess_char(const char& g);
    bool guess_string(const string& s);
    string get_word();

  private:
    string word; 
    Vector<char> display;

}

ostream& operator<<(ostream& os, const Word& w);
//istream& operator>>(istream& is, Word& w);

