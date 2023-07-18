#include<iostream>
using namespace std;

class complex{
    private:
        int real, img;
    public:

        complex (int, int );

        complex (int a){         //img is defaut set to zero
            real  = a;
            img = 0;
        }

        complex(void){
            real = 0;
            img = 0;
        }

        void display(void){
            cout<< real <<"+i"<< img << endl;
        }      



};

complex :: complex (int a, int b){        // parametrized constructor
    real = a;
    img = b; 
}

int main(){

    complex z1(1,1);   
    z1.display();

    complex z2(3);
    z2.display();

    complex z3;
    z3.display();

    return 0;
}