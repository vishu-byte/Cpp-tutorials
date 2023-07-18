#include <cmath>
#include <iostream>
using namespace std;

// Problem
/*i) Create simple calculator
  ii) Create scientific calculator
  iii) Create hybrid calculator

  We will use hierarchical inheritance
*/

// Class- Simple calculator
// Objects are calculators with two given numbers and methods are arithmetic
// functions
class SimpleCal {

protected:
  int num1;
  int num2;

public:
  SimpleCal(){};     // default constructor
  SimpleCal(int a) { // parametrized constructor
    num1 = a;
  }
  void set_number() {
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
  }
  int add(int, int);
  int subtract(int, int);
  int multiply(int, int);
  float divide(int, int);
};

int SimpleCal ::add(int a, int b) { return a + b; }

int SimpleCal ::subtract(int a, int b) { return a - b; }

int SimpleCal ::multiply(int a, int b) { return a * b; }

float SimpleCal ::divide(int a, int b) { return float(a) /float(b); }

// Class Scientific calculator
/* Derived from SimpleCal and can do more */

class SciCal : public SimpleCal {
public:
  SciCal(){}; // default constructor
  int power(int, int);
  float SIN(int);
  float COS(int);

};

int SciCal ::power(int a, int b) { return (pow(a,b)); }

float SciCal ::SIN(int a) { return sin(a); }

float SciCal ::COS(int a) { return cos(a); }


//class Hybridcal

class HybridCal: public SciCal{

public:
   HybridCal(){};

};

int main() { 
  SciCal scical;

  int num1, num2;
  cout << "Enter the first number: " << endl;
  cin >> num1;
  cout << "Enter the second number: " << endl;
  cin >> num2;

  
  cout << "Sum: " <<scical.add(num1, num2) << endl;
  cout << "Difference: " <<scical.subtract(num1, num2) << endl;
  cout << "Product: " <<scical.multiply(num1, num2) << endl;
  cout << "Division: " <<scical.divide(num1, num2) << endl;

  cout << "num1^num2: " <<scical.power(num1, num2) << endl;


    
return 0; }