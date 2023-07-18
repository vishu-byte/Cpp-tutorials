#include<iostream>
using namespace std;

//Aim of functions -------------
/*i) To break the code in independent chunks i.e better code structuring */
/*syntax:
 type function-name(formal arguments){
    code
}
*/


//function protopying ------------
/*
i) Defined functions have to be written before main.
ii) If written after main, they have to be prototyped before main.
syntax type function-name(parameters)
*/
int sum(int a, int b){
  int c;
  c = a + b;
  return c;
}

int subtract(int a, int b);   //function prototyp,

int main() {
  int num1, num2;
  cout<< "Enter 1st number: " << endl;
  cin>>num1;
  cout<<"Enter 2nd number: " << endl;
  cin>>num2;
  cout<<"The sum is: " << sum(num1,num2) << endl;           // num1, num2 are actual arguments
  cout<<"The difference is: " << subtract(num1,num2)<< endl;
  return 0;
}

int subtract(int a, int b){
  int c = a - b;
  return c;
}
