#include <iostream>
using namespace std;

// This pointer
/* Gets you access class data member */

class A {
private:
  int a;

public:
  A & setData(int a) {        //returns the object that uses this method
    this->a = a; 
    return *this; }

  void getData(void){
    cout << "Value of a is: "<<a<<endl;
  }
};

int main() {
  A a;
  a.setData(4).getData();
  return 0; }