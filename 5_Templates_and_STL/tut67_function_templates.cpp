#include <iostream>
using namespace std;

// Function templates
/*Works same as in the class case.*/

template <class T1, class T2> 
float funcAverage(T1 a, T2 b) {
  return (a + b) / 2.0;
}

template <class T> 
void swapp(T &x, T &y){
  T temp;
  temp = x;
  x = y;
  y = temp;
}

int main() {
  cout << "The average is: " << funcAverage(5.4, 6) << endl;
  int x = 5, y = 7;
  swapp(x,y);
  cout << x << y << endl;
  return 0;
}