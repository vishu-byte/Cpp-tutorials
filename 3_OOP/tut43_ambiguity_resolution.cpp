#include <iostream>
using namespace std;

// Ambiguity resolution
/*i) If same type of function is present in different base classes, which one
should be inherited in the derived class? */

class Base1 {

public:
  void greet(void) { cout << "How are you? " << endl; }
};

class Base2 {

public:
  void greet(void) { cout << "Kaise ho? " << endl; }
};

class Derived : public Base1, public Base2 {
  int a;

public:
  void greet(void) {
    Base1 ::greet();
  } // ambiguity resolution, uses base1 greet for derived class
};

class B {

public:
  void say(void) { cout << "Hello there!" << endl; }

};

class D: public B{
public:
    void say(void) {cout <<"Hello beautifull"<<endl;}

};


int main() {

  // Ambiguit 1
  Base1 base1obj;
  Base2 base2obj;
  Derived d;

  base1obj.greet();
  base2obj.greet();
  d.greet();

  // Ambiguity 2 -- inherited class function overwrites base class function of
  // same name

  B b;
  D d2;
  b.say();
  d2.say();
  return 0;
}