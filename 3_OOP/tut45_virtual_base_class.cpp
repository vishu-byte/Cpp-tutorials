#include <iostream>
using namespace std;

class Student {
protected:
  int roll_no;

public:
  void set_roll_no(int a) { roll_no = a; }
  void print_roll_no(void) {
    cout << "Roll no. of this student is: " << roll_no << endl;
  }
};

class Test : virtual public Student {
protected:
  float maths, physics;

public:
  void set_marks(float m1, float m2) {
    maths = m1;
    physics = m2;
  }
  void print_marks(void) {
    cout << "The result of this student is: " << endl
         << "Maths: " << maths << endl
         << "Physics: " << physics << endl;
  }
};

class Sports : virtual public Student {
protected:
  float score;

public:
  void set_score(float sc) { score = sc; }
  void print_score(void) {
    cout << "Physical score of this student is: " << score << endl;
  }

};

class Result : public Test, public Sports{
private:
  float total;
public:
  void display(void){
    total = maths + physics + score;
    print_roll_no();
    cout <<"Total score of this student: "<<total<<endl;
    print_marks();
    print_score();
  }

};

int main() {

  Result vishu;

  vishu.set_roll_no(21);
  vishu.set_marks(97.5, 99.5);
  vishu.set_score(9.9); 
  vishu.display();
  return 0;
}