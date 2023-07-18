#include<iostream>
using namespace std;


//Recursion and recursive function function----
/*i) In this, the function keep calling itself again and again unless a certain condition (base condition) on its formal arguments
is satisfied
ii) Note: it might not be good in all cases as it can lead to overheading i.e calling the same function a large number of times
iii) If iterative approach seems better, use that.
*/

int factorial(int n){          //recall n! = n*(n-1)!
  if (n<=1) {                  //base condition
    return 1;
  }
  return n*factorial(n-1);           // function calling itself inside it
}

int fibonnaci(int n){          //recall dn = dn-1 + dn-2 and d0 = 1, d1 = 1
  if (n<=1) {
    return 1;
  }

  return fibonnaci(n-1)+fibonnaci(n-2);
}

int main(){

  int a;
  cout << "Enter a number: " << endl;
  cin>>a;
  cout << "The factorial of "<<a<< " is "<<factorial(a)<< endl;
  cout <<"The "<<a<<" th term of fibonnaci series is: " << fibonnaci(a)<< endl;
  return 0;
}
