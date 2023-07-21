#include <iostream>
using namespace std;

int main() {

  // Basic example: Pointers are address storing variables---------

  int a = 4;
  int *ptr = &a;

  cout << "The value of a: " << a << endl;
  cout << " The value at address: " << ptr << " is " << *(ptr) << endl;

  //"new" Keyword/Operator------------------

  // int* p = new int(40);   //dynamically creating integer
  float *p = new float(40.89);

  cout << " The value at address: " << p << " is " << *(p) << endl;

  // what about?
  // class* ptr = new class();  ---?

  // To allocate a contiguos block of memory for storing 3 int values
  int *arr = new int[3];
  arr[0] = 10;
  *(arr+1) = 20;
  arr[2] = 30;

  //arr stores address, arr[] is the array

  cout << " The vale of arr[0]: " << arr[0] << endl;
  cout << " The vale of arr[1]: " << arr[1] << endl;
  cout << " The vale of arr[2]: " << arr[2] << endl;

  cout << "The address of first element of array: " << arr << endl;
  cout << "The address of second element of array: " << arr+1 << endl;
  cout << "The address of second element of array: " << arr+2 << endl;

  cout << "The address of first element of array: " << &arr[0] << endl;
  cout << "The address of second element of array: " << &arr[1] << endl;
  cout << "The address of second element of array: " << &arr[2] << endl;
  

  //"delete" Keyword/Operator---------------

  delete [] arr;      //frees the arr to store other values
  return 0;
}