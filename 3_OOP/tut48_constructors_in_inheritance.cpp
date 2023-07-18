#include <iostream>
using namespace std;

// Constructors in Derived classes

class Base1 {
private:
  int data1;

public:
  Base1(int d) {
    data1 = d;
    cout << "Base1 constructor is called" << endl;
  }
  void printdata1(void) { cout << "The value of data1 is: " << data1 << endl; }
};

class Base2 {
private:
  int data2;

public:
  Base2(int i) {
    data2 = i;
    cout << "Base2 constructor is called" << endl;
  }
  void printdata2(void) { cout << "The value of data2 is: " << data2 << endl; }
};

class Derived : public Base1, public Base2 {
private:
  int derived1, derived2;

public:
  Derived(int a1, int a2, int a3, int a4) : Base1(a1), Base2(a2) {
    derived1 = a3;
    derived2 = a4;
    cout << "Derived constructor is called " << endl;
  }

  void printdata(void) {
    cout << "The value of derived1 and derived2 is : " << derived1 << " "
         << derived2 << endl;
  }
};

int main() { 
  Derived vishu(1,2,3,4);
  vishu.printdata1();
  vishu.printdata2();
  vishu.printdata();
    
  
  return 0; }