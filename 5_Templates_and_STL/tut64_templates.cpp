#include <iostream>
using namespace std;


//Templates
/*Parameterized classes*/

template <class T>
class vector{
public:
  T * arr;   // pointer for int type 
  int size;
public:
  vector(int s){
    size = s;
    arr = new T[size];    //creating on heap, arr will store address of first element
  }

  T self_dotproduct(void){
    int d = 0;
    for (int i = 0; i < size; i++) {
      d += (this->arr[i])*(this->arr[i]);
    
    }  
    return d;
  }

   T dotproduct(vector &v){
    T d = 0;
    for (int i = 0; i < size; i++) {
      d += (this->arr[i])*(v.arr[i]);
    
    }  
    return d;
  }

  


};

int main(){
//   int dot;
//   vector v1(3);
//   v1.arr[0] = 1;
//   v1.arr[1] = 2;
//   v1.arr[2] = 3;

//   vector v2(3);
//   v2.arr[0] = 2;
//   v2.arr[1] = 3;
//   v2.arr[2] = 4;

//   dot = v1.self_dotproduct();

//   cout << "The magnitude square is: "<<dot<<endl;

//   cout << "The dot product is: "<<v1.dotproduct(v2)<<endl;

int dot;
  vector <float> v1(3);
  v1.arr[0] = 1.4;
  v1.arr[1] = 3.3;
  v1.arr[2] = 0.1;

  vector <float> v2(3);
  v2.arr[0] = 0.1;
  v2.arr[1] = 1.90;
  v2.arr[2] = 4.1;

  dot = v1.self_dotproduct();

  cout << "The magnitude square is: "<<dot<<endl;

  cout << "The dot product is: "<<v1.dotproduct(v2)<<endl;

  return 0;
}