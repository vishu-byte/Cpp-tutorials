#include<iostream>
using namespace std;


class c1;   // forward declaration
class c2;

class c1{
    private:
        int val1;
    public:
        void setdata(int a){
            val1 = a;
        }    
        void display(void){
            cout<< val1 << endl;
        }

        friend void swap_vals(c1 &,c2 & );     //calls by referrence

};


class c2{
    private:
        int val2;
    public:
        void setdata(int a){
            val2 = a;
        }    
        void display(void){
            cout<< val2 << endl;
        }

        friend void swap_vals(c1 & ,c2 & );     //calls by referrence
};


void swap_vals(c1 &o1, c2 &o2 ){           // call by referrence using referrence variables of c++
    int flag;
    flag = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = flag;

}

int main(){

    c1 a;
    c2 b;

    a.setdata(3);
    b.setdata(4);

    swap_vals(a,b);

    a.display();
    b.display();

    return 0;
}