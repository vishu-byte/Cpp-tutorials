#include<iostream>
using namespace std;


//Constructors and destructors
/*i) Aim is to pass values of objects along with their declaration in one line.
ii) Constructor :
is a special member function of a class with the same name as that of the class. It is used to 
initialize objects of the class. It is automatically invoked when objects are initialized.
*/

class complex{
    private:
    int real, img;

    public:
    complex(void);   // constructor declaration, no return type needed
    void display(void){
        cout << real <<"+ i"<< img << endl;
    }



};
 
complex :: complex(void){      // defalut constructor as it takes no parameters
    real = 0;
    img = 0;
}

int main(){

    complex c;

    c.display();

    return 0;
}