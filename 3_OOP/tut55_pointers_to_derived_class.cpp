#include <iostream>
using namespace std;


//Example of Runtime polymorphism
/* i)Which display function to use in the following code is decided during runtime
i.e binding to the function occurs during runtime
ii)We can tell from reading code to which the function is binded to, but this binding 
occurs during runtime.*/

class Base {
public:
  int var_base;
  void display(void) { cout << "Value of var_base: " << var_base << endl; }
};

class Derived : public Base {
public:
  int var_der;
  void display(void) { cout << "Value of var_der: " << var_der << endl; }
};

int main() {
  Base obj_base;
  Derived obj_der;

  Base *base_ptr;
  Derived *der_ptr;

  base_ptr = &obj_der; // base class pointer can point to derived class object

  base_ptr->var_base = 34; // base class pointer can access members of base class

  base_ptr->display();

  // base_ptr->display_var();        //but not of derivede class

  der_ptr = &obj_der;
  der_ptr->var_der = 340;
  der_ptr->display();          //binds to derived class member 
  der_ptr->var_base = 300;

  return 0;

}