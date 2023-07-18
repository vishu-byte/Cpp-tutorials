#include<iostream>
using namespace std;


//Dynamic initialization using constructors
/*i)Dyanmics initialization: objects are created during runtime of program itself.
*/

class bankdeposite{

    private:
        int principal;
        int years;
        float interest_rate;
        float return_value;
    public:

        bankdeposite(){};
        bankdeposite(int p, int y, float r);  // like r = 0.04
        bankdeposite(int p ,int y, int r);    // like r is 4 percent

        void show(void){
            cout << "Principal: "<< principal << endl;
            cout << "years: " << years << endl;
            cout << "Interest rate: " << interest_rate << endl;
            cout << "Return value: "<< return_value << endl;

        }


};



bankdeposite:: bankdeposite(int p, int y, float r){
    principal = p;
    years = y;
    interest_rate = r;
    return_value = principal;

    for (int i = 0; i < y; i++){
        return_value =return_value*(1+interest_rate);
    }
}

bankdeposite:: bankdeposite(int p, int y, int r){
    principal = p;
    years = y;
    interest_rate = float(r)/100.0;
    return_value = principal;

    for (int i = 0; i < y; i++){
        return_value =return_value*(1+interest_rate);
    }
}
    


int main(){

    bankdeposite bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout<<" Enter the value of p, y, and r: "<< endl;
    cin>> p>>y>>r;

    bd1 = bankdeposite(p, y, r);    //explicit call

    bd1.show();


    cout<<" Enter the value of p, y, and R: "<< endl;
    cin>> p>>y>>R;


    bd2 = bankdeposite(p, y, R); 
    bd2.show();

    return 0;
}