#include "Man.h"

Man::Man(int s):stage(s) {
  if (s>max_num_stages) cerr << "ERROR";
}

void Man::increment_stage(){
  if (++stage > max_num_stages) cerr << "ERROR";
}

int Man::get_stage(){
  return stage;
}

bool Man::is_over(){
  if (max_num_stages == stage)
    return true;
  return false;
}

int Man::get_picture(){ return drawings[stage];}

ostream& operator<<(ostream& os, const Man& m){
  return os << m.get_picture() << '\n';
}
