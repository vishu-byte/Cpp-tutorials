#include<iostream>
using namespace std;



//Friend Class
/*All member functions of a class become friends of the given class in context. */

// Forward declaration
class complex;      // tells complier that there is a class named complex ahead in program


class calculator{

public:
  int sum(int a, int b){
    return (a+b);
  }

  int sum_real_complex(complex , complex  );         // No need to completley assign variable names!! as it is not implementation of function
  int sum_img_complex(complex , complex  );
};

class complex{
private:
  int real;           // personal variables attached to an object
  int img;

  //friend int calculator::sum_real_complex(complex , complex );
friend class calculator;  // The entire class's member functions are now friends
public:
  void set(int v1, int v2){
    real = v1;
    img = v2;
  }
  void display(void){
    cout << real<<"+i"<<img<<endl;
  }




};


int calculator:: sum_real_complex(complex c1, complex c2){
  return (c1.real + c2.real);
}

int calculator:: sum_img_complex(complex c1, complex c2){
  return (c1.img + c2.img);
}

int main(){

  complex o1, o2;
  calculator calc;
  int real_sum, img_sum;

  o1.set(1,2);
  o2.set(3,4);

  real_sum =  calc.sum_real_complex(o1, o2);
  img_sum = calc.sum_img_complex(o1, o2);

  cout << real_sum <<endl;
  cout << img_sum <<endl;

  return 0;
}
