/*
  The non-const function nonFunc() can modify member data alpha, but the constant function conFunc() can't. If it tries, a compiler error results
*/
#include <iostream>
using namespace std;

class aClass {
private:
  int alpha;
public:
  void nonFunc() {          //non const member function
    alpha = 99;             //ok
  }
  void conFunc() const {    //const member function
    alpha = 99;             //error. can't modify a member
  }
};