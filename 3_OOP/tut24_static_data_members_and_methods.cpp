#include<iostream>
using namespace std;


//Static variable
/*To create a variable that will be same for all objects of a class, and is allocated memory at one place only.*/


//Static member function
/*i)Only accesses static members (data or functions) of a class
ii) Or to create a function that can run from name of class itself without need of object creation*/




//Class Employee
/* Creates employe objects*/
class Employee {
private:
  int id;
  int static static_count;        //one static_count for all objects to be created
  int count;                 //Each object will have its own count variable
public:
  void setData(void){
    cout << "Enter the id of employee: "<<endl;
    cin>>id;
    static_count++;
  }

  void getData(void){
    cout<< "The id is: " << id <<" and this employee is number "<< static_count<< endl;
  }

  static void get_static_count(void);      // a static member function

};

int Employee :: static_count = 0 ;       //Default value is 0  // Static variable of class. All created objects will use the same count now. Static members
                                // have to be defined outside of class in this way.


void Employee :: get_static_count(void){
  cout << "Total count of Employee is: "<< static_count << endl;
}

int main() {

    //static_count is the static data member of class Employee
    Employee vishu, arushi, ashish;

    vishu.setData();
    vishu.getData();

    arushi.setData();
    arushi.getData();

    ashish.setData();
    ashish.getData();


    Employee::get_static_count();     //static member function needs only class resolution to run. No referrence of any object needed.

  return 0;
}
