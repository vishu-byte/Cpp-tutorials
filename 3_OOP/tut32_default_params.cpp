#include<iostream>
using namespace std;

class simple{
    private:
        int data1;
        int data2;

    public:
        simple(int a, int b = 9){        // parameterized constructor, b default value is 9
            data1 = a;
            data2 = b;
        }    

        void display(void){
            cout<<data1<<" "<< data2 << endl;
        }



};

int main(){

    simple a(1,4);
    a.display();

    simple b(3);
    b.display();

    return 0;
}