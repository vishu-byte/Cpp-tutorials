#include <iostream>
using namespace std;

// Multilevel inheritance:
/* A-->B-->C , it helps to keep in mind an object instance of each class*/

// Base class
class Student {
protected:
  int roll_number;

public:
  void set_roll_number(int);
  void get_roll_number(void);
};

void Student ::set_roll_number(int roll) { roll_number = roll; }

void Student ::get_roll_number(void) {
  cout << "The roll no. of this student is: " << roll_number << endl;
}

// Derived class
class Exam : public Student {
protected:
  float maths;
  float physics;

public:
  void set_marks(float, float);
  void get_marks(void);
};

void Exam ::set_marks(float m, float p) {
  maths = m;
  physics = p;
}

void Exam ::get_marks(void) {
  // get_roll_number();
  cout << "Maths and physics marks: " << maths << " " << physics << endl;
}

// Sec. derived class
class Result : public Exam {
private:
  float percentage;

public:
  void display(void);
};

void Result ::display(void) {
  get_roll_number();
  get_marks();
  cout << "Percentage of this student is: " << (maths + physics) / 2 << endl;
}

int main() {
  Result res;
  res.set_roll_number(21);
  res.set_marks(90.5, 97.4);
  res.display();

  return 0;
}