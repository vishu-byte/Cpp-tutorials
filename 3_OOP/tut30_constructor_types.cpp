#include<iostream>
using namespace std;


class complex{

    private:
        int real, img;

    public:

        complex(int ,int );   //constructor  
        void display(void){
            cout<< real <<"+i"<< img << endl;
        }  


};

complex:: complex(int x, int y){  // parametrized constructor
    real = x;
    img = y;
}

int main(){

    //implicit call
    complex a(3,4);

    //explicit call
    complex b = complex(5,6);

    a.display();
    b.display();
     

    return 0;
}