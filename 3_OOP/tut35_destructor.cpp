#include<iostream>
using namespace std;


//Destructor:
/*i) It frees the memory allocated to an object.
ii) Takes no argument nor it returns any value.
iii) Complier calls it on its own during exiting main program.*/

//Block {}
/*i)Things are created and destroyed inside the block scope. */

class num{

    private:
        int static count;
    public:
        num(){
            count++;
            cout <<" This is the time a constructor is called for object number: "<<count<<endl;
        }

        //destructor initialization
        ~num(){
            cout<<"This is the time a destructor is called for object number: "<<count<<endl;
            count--;
        }

};

int num:: count = 0;


int main(){
    cout<<"Enter Main program--"<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;

    {
        cout<<"Enter block--"<<endl;
        cout<<"Creating two more objects n2 and n3 "<<endl;

        num n2, n3;

        cout<<"Exit block--"<< endl;

    }

    cout<<"Back to Main--"<<endl;

    return 0;
}