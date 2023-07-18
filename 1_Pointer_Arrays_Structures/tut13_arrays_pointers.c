#include<iostream>
using namespace std;

int main (){
  //what is an array?
  //-> a matrix

int marks[4] = {23,45,22,31};

cout << marks[0] << endl;


// pointers and array
// we dont need & operator ; name of array gives address of first block of array

int *p = marks;     // no & required

cout << "The first element is: " << *p << endl;
cout << "The second element is: " << *(p+1) << endl;
cout << "The third element is: " << *(p+2) << endl;
cout << "The 4th element is: " << *(p+3) <<endl;


}
