#include<iostream>
using namespace std;

//Objects as arguments
/*i) A class is like a user defined data type. Its objects behave in the same way as int, float, doube do!
ii) You can pass an object as an argument like int, float etc. */


//Friend functions
/*These are functions defined separatly from a class (i.e not its member function) but are its friends and so can access its private variables */


//Class complex
/* Each object of this class is a complex number */





class complex{
private:
  int real;           // personal variables attached to an object
  int img;

public:
  void set(int v1, int v2);
  void set_as_sum(complex c1, complex c2);
  static complex sum(complex c1, complex c2);         // make it static, so that it can be called without reference to object, returns complex data type
  friend complex sumcomplex(complex o1, complex o2);
  void display(void);
};

void complex :: set(int v1, int v2){
  real = v1;
  img = v2;
}

void complex :: set_as_sum(complex c1, complex c2){
  real = c1.real + c2.real;
  img = c1.img + c2.img;
}

complex complex :: sum(complex c1, complex c2){
  complex c;
  c.set(c1.real + c2.real, c1.img + c2.img);
  return c;
}

complex sumcomplex(complex o1, complex o2){
  complex o;
  o.set(o1.real + o2.real, o1.img + o2.img);
  return o;
}

void complex :: display(void){
  cout << real<<"+i"<<img<<endl;
}







int main(){
  complex c1, c2, c3, c4, c5;

  c1.set(1,2);
  c2.set(3,4);


  // 1st way
  c3.set_as_sum(c1, c2);
  c3.display();

  //2nd way
  c4 = complex::sum(c1,c2);
  c4.display();

  //3rd way, using friend function
  c5 = sumcomplex(c1,c2);
  c5.display();


  return 0;
}
