#include <iostream>
using namespace std;


//Single inheritance, privately derived



class Base {
private:
  int data1; // Private, so not inheritable
public:
  int data2;
  void setdata(void);
  int getdata1();  
  int getdata2();
};

void Base ::setdata(void) {
  data1 = 10;
  data2 = 20;
}

int Base ::getdata1(void) { return data1; }  //has access to data1 which is not inherited

int Base ::getdata2(void) { return data2; }

class Derived : private Base {
private:
  int data3;

public:
  void process();
  void display();
};

void Derived ::process(void) {
  setdata();
  data3 = data2 * getdata1(); 
}

void Derived ::display(void) {
  cout << "The value of data1: " << getdata1() << endl;    //data1 can be accessed through an inherited method
  cout << "The value of data2: " << data2 << endl;
  cout << "The value of data3: " << data3 << endl;
}

int main() {

 
  Derived der;

  der.process();
  der.display();  
    
  return 0; 
}