#include <iostream>
using namespace std;


//inline functions ---------
/* i)If a small code functions is repeatedly called ; better to make it inline request to complier.
it replaces the call function cycle with actual code (better speed)
not too usefull for large code functions
ii) Not to be used with static variables, functions containing loops, recurssion etc.
*/

//static variable------------
/* i) It is like a loop variable, but for a functions

*/

// Default formal arguments----------
/*i) These are arguments whose values are used as set by function creater unless specified separatly
ii) These should be defined in the end of list of arguments.

*/

// Constant formal arguments------------
/*i)These are the arguments whose values must be kept unchanged.
ii) This is used mostly for pointers and reference variable*/



inline int product(int a, int b){         //
  return a*b;
}

int sum(int a, int b){
  static int c = 0;  //This line runs only in the first call of functions
  c = c + 1;  //In next call, value of the c will be retained
  return a+b+c;
}

float moneyReceived(int money, float factor = 1.04){    //default value of factor = 1.04,
  return money*factor;

}


//int strlen(const char *p){          //p is a pointer whose value should not be changed by function

//}

int main() {
    int a, b;      //two register locations
    int money = 100000;
    //cout<< "Enter a and b: " << endl;
    //cin>>a>>b;
    //cout<< "The product of a and b is: "<<product(a,b)<<endl;
    cout<< "If you have "<< money << "Rs in your account, you will receive "<<moneyReceived(money)<< "after 1 year"<< endl;
    cout<<"For VIP: If you have "<< money << "Rs in your account, you will receive "<<moneyReceived(money,1.10)<< "after 1 year"<< endl;
    // default value now changed to 1.10
  return 0;
}
