#include <iostream>
using namespace std;

class Base {
private:
  int a;

protected:
  int b;

public:
  int c;
};

class Derived : protected Base {
public:
  int d;
};

int main() {
  Base b;
  Derived d;


 return 0; }