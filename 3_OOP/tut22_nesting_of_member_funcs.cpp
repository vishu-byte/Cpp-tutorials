#include <iostream>
using namespace std;


//Nesting of member functions
/* We can call one member function into other too!
 */


class binary{

private:

  string s;        // by default private member
  void check_binary(void);    // can only be used by member functions of this class

public:

  void read(void);
  void ones_complement(void);
  void display(void);

};

void binary :: read(void){
  cout<<"Enter a binary number"<< endl;
  cin>>s;
}

void binary :: check_binary(void){
  for (int i = 0 ; i < s.length(); i++){
    if (s.at(i) != '0' && s.at(i) !='1') {
      cout<<"Entered number is not binary"<<endl;
      exit(0);   // exit with error code 0
    }
  }
}

void binary :: ones_complement(void){
  check_binary();

  for (int i = 0; i < s.length(); i++){

    if (s.at(i) == '0'){
      s.at(i) = '1';
    }
    else {
      s.at(i) = '0';
    }

  }
}


void binary :: display(void){

  for (int i = 0; i < s.length(); i++){

    cout << s.at(i);

  }

  cout << endl;
}



int main(){
  binary b;
  b.read();
  //b.check_binary();    implemented inside ones_complement itself
  b.display();
  b.ones_complement();
  b.display();

  return 0;
}
