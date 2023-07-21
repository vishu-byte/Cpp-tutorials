#include <iostream>
#include <fstream>   //provides classes for working with files
using namespace std;

/* Useful classes for handling files from fsteam:
1. fsteambase --> base class
2. ifstream --> derived from 1 : for reading a file
3. ostream --> derived from 1  : for writing in a file
*/

//1) Opening a file
/*Primarily two ways to open a file
i)Using the constructor.
ii) Using a member function open() of the class*/

//1) Opening a file
/*Primarily two ways to open a file 
i) Using the constructor 
ii) Using a member function open() of the class*/

int main(){
  string st = "vishu bhai";
  string st2;

  //Using a constructor to open a file and writing in it
  ofstream out("sample60.txt");    //using constructor of ofstream
  out << st;

  //Using a constructor to open a file and read in it
  ifstream in("sample60b.txt");
  //in >> st2;  // only gets a word

  getline(in, st2);

  cout << st2<<endl;


  return 0;
}