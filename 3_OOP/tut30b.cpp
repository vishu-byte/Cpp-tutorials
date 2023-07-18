#include<iostream>
#include<math.h>
using namespace std;

//class point
/* creates a point in 2D plane*/
class point{
    private:
        double x, y;

    public:

        point(double, double );    //constructor

        void displaypoint(void){
            cout<<"("<<x<<", "<<y<<")"<<endl; 
        }

        friend double distance(point , point );


};

point :: point(double a, double b){       //parametrized constructor
    x = a;
    y = b;
}


double distance(point a, point b){
    double distance;
    distance = pow(pow((a.x - b.x),2) + pow((a.y - b.y),2),0.5) ;

    return distance;
} 



int main(){

    point p(1.0,1.0);

    p.displaypoint();

    point q(4.0, 6.0);


    cout<< distance(p, q) << endl;

    return 0;
}