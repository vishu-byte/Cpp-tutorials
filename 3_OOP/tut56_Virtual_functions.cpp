#include <iostream>
using namespace std;


// Virtual function
/*i) Making a member function virtual tells compiler to run function of derived class if
pointer points to an object of derived class.
ii) Runtime polymorphism: binding of object to function occurs during runtime.*/


class Base {
public:
  int var_base;
  virtual void display(void) { cout << "Value of var_base: " << var_base << endl; }
};

class Derived : public Base {
public:
  int var_der;
  void display(void) { cout << "Value of var_der: " << var_der << endl; }
};


int main(){
  Base obj_base;
  Derived obj_der;

  Base *base_ptr; 

  base_ptr = &obj_der;

  base_ptr->var_base = 9;
  base_ptr->display();   //this display will be of derived class

  return 0;
}