#include<iostream>
using namespace std;

class X;         // forward declaration
class Y;         

class X{

    private:
        int data;

    public:
        void setdata(int value){
        data = value;
        }   

        friend void add(X ,Y );

};

class Y{

    private:
        int num;

    public:
        void setdata(int value){
        num = value;
        }    

        friend void add(X ,Y ); 


};


void add(X o1, Y o2){
    cout << "The sum of data is: " << o1.data + o2.num << endl;
}


int main (){

    X a;
    Y b;

    a.setdata(3);
    b.setdata(4);

    add(a,b);

    return 0;
}