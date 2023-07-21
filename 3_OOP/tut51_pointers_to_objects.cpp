#include <iostream>
using namespace std;


//Arrow operator:
/*  -> = dereferrence + a function call
*/

//Array of objects on heap

class Complex {
private:
  int real, img;

public:
  void setdata(int a, int b) {
    real = a;
    img = b;
  }
  void getdata(void) { cout << real << "+i" << img << endl; }
};

int main() {
  Complex c1;
  //Complex *ptr = &c1;   //creating on stack
  Complex *ptr = new Complex;  //creating on heap

  cout << "The address of block of c1 is: " << ptr << endl;

  //(*ptr).setdata(3, 4) is same as
  ptr->setdata(3, 4);
  ptr->getdata();

  //Array of objects on a heap
  Complex *arr_of_objs = new Complex[3];

  // arr_of_objs[0] is first object, arr_of_objs[2] is second
  // arr_of_objs is address of first object, arr_of_objs+1 is of second

  arr_of_objs[0].setdata(2, 3);
  //(*arr_of_objs).getdata(); is same as
  arr_of_objs->getdata();

   arr_of_objs[1].setdata(5, 6);
  //(*arr_of_objs).getdata(); is same as
  (arr_of_objs+1)->getdata();

  


 

  return 0;
}