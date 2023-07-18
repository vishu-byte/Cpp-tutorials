#include <iostream>
using namespace std;

// Initialization in constructor

class Test {
private:
  int a, b;

public:
  // Test(int i, int j) : a(i), b(j) {
  // Test(int i, int j) : a(i), b(2*j) {
  // Test(int i, int j) : a(i), b(a+j) {
  // Test(int i, int j) : b(j), a(b+j) {     -->This will be a problem as 'a'
  // is declared first in private then 'b'
  Test(int i, int j) : a(i), b(a + j) {
    cout << "constructor is called" << endl;
    cout << "The Value of a:" << a << endl;
    cout << "The Value of b:" << b << endl;
  }
};

int main() {

  Test t(3, 4);

  return 0;
}