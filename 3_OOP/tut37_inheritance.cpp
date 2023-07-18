#include <iostream>
using namespace std;

// Single inheritance
/* A --> B */

// Derived class syntax
/* class  {{derived_class_name}} : {{visibilty_mode}} {{base-class name}} {
new vars/functions etc.
};
Default visibility mode: private

i)Visibility mode: can be public or private
public mode: public members of base class become public members of derived class
private mode: public members of base class become private members of derived
class

Note: private members of base class can not be inherited at all !!
*/

// Base class
class Employee {

public:
  int id;
  float salary;
  Employee() {}      // Default constructor
  Employee(int ID) { // parametrized constructor
    id = ID;
    salary = 34.0;
  }
};

// Derived class

class Programmer : public Employee {
  // Vars inherited: id, salary (public)
  // Funcs inherited: Employe(), Employe(int ) (public)

public:
  int language_code = 9;
  Programmer(int ID) {
    id = ID; // id variable is inherited from Employee
  }
};

int main() {

  Employee vishu(1), arushi(2);

  cout << vishu.salary << endl;
  cout << arushi.salary << endl;

  Programmer skillF(1); // calls default constructor of base class too

  cout << skillF.id << endl;

  cout << skillF.id << endl;
  cout << skillF.language_code << endl;

  return 0;
}