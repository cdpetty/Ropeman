//Man.h
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Man{
  public:
    void increment_stage();  
    int get_stage();
    string get_picture();
    Man():stage(0){}
    Man(int s);


  private:
    int stage;
    const int max_num_stages = 6;
    const vector<string> drawings{"______\n|    |\n|\n|\n|\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|\n|\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|    |\n|\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|   -|\n|\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|   -|-\n|\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|   -|-\n|   /\n|\n--^-^-^-^-", "______\n|    |\n|    O\n|   -|-\n|   / \\\n|\n--^-^-^-^-"};
};

ostream& operator<<(ostream& os, const Man& m);
