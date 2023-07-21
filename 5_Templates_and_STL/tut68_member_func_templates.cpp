#include <iostream>
using namespace std;

//Member function templates

//Function template overloading

template <class T>
class vishu{
public:
  T data ;
  vishu(T a){
    data = a;
  }
  void display(void);
};

template <class T>          //member function template
void vishu<T> :: display(void){
  cout << data << endl;
}

//function template overloading
/*Function with exact match is prioritized*/

void func(int a){
  cout << "I am the fist func() " << a << endl;
}

template <class T>
void func(T a){ 
  cout << "I am the templatized func() " << a << endl;
}

int main(){
  vishu<int> v(6);
  vishu<char> v1('v');
  v1.display();

  func(4);   //function with exact match is prioritized, then the func that can be made similar is called
  return 0;
}