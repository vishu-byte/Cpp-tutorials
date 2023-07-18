#include <iostream>
using namespace std;




class Employee{
private:
  int id;
  int salary;

public:
  void setid(void){
    cout<<"Enter Employee id: " << endl;
    cin>>id;
  }

  void setsalary(void){
    cout<<"Enter employee's salary: " << endl;
    cin>>salary;
  }

  void getid(void){
    cout<<"The id of this employee is: "<<id<<endl;
  }

  void getsalary(void){
    cout<<"The salary of this employee is: "<<salary<<endl;
  }


};

int main(){

  //Employee vishu, arushi, itachi, madra;

  //vishu.setid();
  //vishu.getid();

  int num_of_employee = 4;
  Employee fb[num_of_employee];       // an array of objects of class employe, in our case say its a company of 4 people

  for (size_t i = 0; i < num_of_employee; i++) {
    fb[i].setid();
    fb[i].getid();
  }


  return 0;
}
