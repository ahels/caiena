#include "subject.hpp"

Subject::Subject(string name) {
  this->name = name;
}

void Subject::print() {
  int n_hash = name.size() + 10;
  for (int i = 0; i < n_hash; ++i)
    cout << '#' << endl;
  cout << endl;

  cout << "#### " << name << " ####" << endl;

  int n_hash = name.size() + 10;
  for (int i = 0; i < n_hash; ++i)
    cout << '#' << endl;
  cout << endl;
  
  for (Category cat : categories) {
    cout << "###  " + cat.first << endl;
  }

}
