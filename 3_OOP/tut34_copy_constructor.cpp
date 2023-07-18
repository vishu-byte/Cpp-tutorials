#include<iostream>
using namespace std;


//Copy constructor
/*i) Creates a copy of an object 
ii) When user defined copy constructor is not present but it is called, complier provides its own default copy 
constructor*/

class Number{
private:
    int a;

public:
    Number(void){           // default constructor, does nothing
        a = 0;
    }        

    Number(int num){        //parameterized constructor
        a = num;
    }


    //Number(Number &obj){     //copy constructor
    //    a = obj.a ;
    //}

    void display(void){
        cout << "The number for this object is: "<< a << endl;
    }



};

int main(){

    Number x, y, z(45), z2;

    z.display();

    Number z1(z);   //copy constructor invoked
    z1.display();

    z2 = z; //copy constructor not invoked. (z2 is already created)

    Number z3 = z;  //copy constructor invoked as z3 is in the making.

    return 0;
}