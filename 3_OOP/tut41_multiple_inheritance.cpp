#include <iostream>
using namespace std;

// Multiple inheritance
/* More than one base class */
/* Syntax:
class {{Derived}}: {{visibility-mode}} {{base1}}, {{visibility-mode}} {{base2}}
{ class body...
};
*/

class base1 {
protected:
  int base1int;

public:
  void set_base1int(int a) { base1int = a; }
};

class base2 {
protected:
  int base2int;

public:
  void set_base2int(int b) { base2int = b; }
};

class Derived : public base1, public base2 {
public:
  void show(void) {
    cout << "base1int: " << base1int << endl;
    cout << "base2int: " << base2int << endl;
  }
};

/* Dervied clas structure:
Data members:
  protected: base1int, base2int
Member functions:
  public: set_base1int, setbase2int, show  

*/

int main() { 
  
  Derived d;

  d.set_base1int(2);
  d.set_base2int(4);
  d.show();

  return 0; }