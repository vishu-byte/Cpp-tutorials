#include<iostream>
using namespace std;


// What is a structure?
// It is user defined data type
// A structure like an array stores lots is data, but of different types too!

struct employee
{
  /*data */
  int eId;
  char favChar;
  float salary;

};


typedef struct employee2               //typedef means, jisko me stuct empo bolna chahta tha usko ab me ep bolna chahta hu
{
  /*data */
  int eId;
  char favChar;
  float salary;

}ep ;


//Union
// Helps in memory allocation
// If only one data type of structure will be used at a time, Union is better to used

union money
{
  int rice;
  char car;
  float rupees;

};


int main(){

// create an employee

struct employee vishu;
ep vishu2;                      // only ep can work now
union money m1;

vishu.eId = 1;
vishu.favChar = 'b';
vishu.salary = 1200000;

vishu2.eId = 1;

cout << vishu.salary << endl;

cout << vishu2.eId << endl;


m1.rice = 34;        // only one data type to be used at a time

cout << m1.rice << endl;

return 0 ;

}
