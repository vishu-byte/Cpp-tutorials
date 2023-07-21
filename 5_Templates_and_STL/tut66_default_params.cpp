#include <iostream>
using namespace std;

// Template with default parameters

template <class T1 = int, class T2 = float, class T3=char> 
class vishu {
public:
  T1 a;
  T2 b;
  T3 c;
  vishu(T1 x, T2 y, T3 z) {
    a = x;
    b = y;
    c = z;
  }
  void display(){
    cout << this->a << " " << this->b << " " << c << endl; 
  }
};

int main() { 
  vishu <> v(3, 4.4,'v');   //pass class parameters as default
  v.display();

  vishu <float, char, int> v1(3.3,'z',6);   //pass class parameters as default
  v1.display();
  
  
  return 0; }