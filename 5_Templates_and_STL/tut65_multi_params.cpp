#include <iostream>
using namespace std;

// Templates with multiple parameters

template <class T1, class T2> class myclass {
public:
  T1 data1;
  T2 data2;
  myclass(T1 a, T2 b) {
    data1 = a;
    data2 = b;
  }
  void display(void) { cout << this->data1 << " " << this->data2 << endl; }
};

int main() {
  myclass<int, char> obj(3, 'h');

  obj.display();

  return 0;
}