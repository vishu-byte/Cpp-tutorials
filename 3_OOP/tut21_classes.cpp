#include <iostream>
using namespace std;

//Class-
/* A class is a template for creating objects(user defined data type). It differs from structures in the fact that it can include
methods/functions and is better in data hiding
syntax: class classname{

}
*/

class Employee{
private:              // can only be accessed in methods in this class only
  int a, b, c;

public:               // can be accessed by external methods too
  int d,e;

  void setdata(int a1, int b1, int c1);  //function prototype - implementation is later
  void getdata(){
    cout<<"The value of a is: " << a << endl;
    cout<<"The value of b is: " << b << endl;
    cout<<"The value of c is: " << c << endl;
    cout<<"The value of d is: " << d << endl;
    cout<<"The value of e is: " << e << endl;
  }

};

void Employee :: setdata(int a1, int b1, int c1){    // :: = scope resolution operator
  a = a1;
  b = b1;
  c = c1;
}


int main(){

  Employee Vishu;


  Vishu.d = 4;
  Vishu.e = 45;

  //Vishu.a = 51   --> Will throw error as 'a' is private variable and can not be accessed externally


  Vishu.setdata(1,2,3);        // a , b, c variables are accessible via a method of Employee class
  Vishu.getdata();


  return 0;
}
