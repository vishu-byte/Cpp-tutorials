#include<iostream>
using namespace std;

int main (){
  //what is a pointer?
  //-> A data type that stores address of other data types

  int a = 3;
  int *b = &a;
  // & --> address of operator


  cout<<"The address of a is: " << &a << endl;
  cout<<"The address of a is: "<< b << endl;

  // *---> (value at) deferenece operator
  cout<<"The value at address b: "<< *b<< endl;


}
