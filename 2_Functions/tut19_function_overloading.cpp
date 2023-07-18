#include<iostream>
using namespace std;

//Function overloading------
/*i)Using the same name but for different functions (polymorphism of C++) (roop ek, kaam anek)
*/

// sum function is overloaded
int sum(int a, int b){
  return a + b;
}

int sum(int a, int b, int c){
  return a + b + c;

}

int main(){

  int a =3, b=4, c=7;
  cout<< "The sum of a and b :" << sum(a,b)<< endl;
  cout<<"The sum of a, b and c: "<<sum(a,b,c)<< endl;


  return 0;
}
