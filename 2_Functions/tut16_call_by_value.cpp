#include<iostream>
using namespace std;


//Calling by value: to access value of variables
//Calling by reference: to access address of variables

// This will not swap variables, it won't do anything to actual parameters
void swap(int a, int b){         //calling parameters by value
  int temp = a;
  a = b;
  b = temp;
}

void swapPointer(int* a, int* b){   // calling parameters by reference using pointer
  int temp = *a;
  *a = *b;
  *b = temp;

}

void swapReferencVar(int &a, int &b){   // calling parameters by reference using reference variables of c++
  int temp = a;
  a = b;
  b = temp;

}


int & Returnbyref(int &a, int &b){       //returning by reference

  return a;
}

int main() {
  int x = 4, y =5;

  cout << "The value of x,y is:" << x << y << endl;
  //swap(x,y);
  //swapPointer(&x,&y);
  swapReferencVar(x,y);
  cout << "The value of x,y is :" <<x << y << endl;
  Returnbyref(x,y) = 33;        // returns reference of x
  cout << "The value of x is :" <<x <<endl;
  return 0;
}
