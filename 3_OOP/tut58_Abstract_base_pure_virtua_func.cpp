#include <cstring>
#include <iostream>
#include <string>
using namespace std;

//Pure virtual function
/*A virtual function that has to be overwritten in derived class*/

//Abstract base class
/*A base class whose only purpose is to create other classes using inheritance*/

class CWH {
protected:
  string title;
  float rating;

public:
  CWH(string s, float r) {
    title = s;
    rating = r;
  }
  virtual void display()=0; // do-nothing function --> pure virtual function
}; 

class CWHVideo : public CWH {
private:
  float videolength;

public:
  CWHVideo(string s, float r, float vl) : CWH(s, r) { videolength = vl; }
  void display(void) {
    cout << " Video title: " << title << endl;
    cout << " Video rating: " << rating << endl;
    cout << " Video length: " << videolength << endl;
  }
};

class CWHtext : public CWH {
private:
  int words;

public:
  CWHtext(string s, float r, int wc) : CWH(s, r) { words = wc; }
  void display(void) {
    cout << " Text title: " << title << endl;
    cout << " Text rating: " << rating << endl;
    cout << " Text word count: " << words << endl;
  }
};

int main() {
  string title;
  float rating, vlen;
  int words;


  // For CWH video:
  title = "Django tutorial";
  vlen = 4.55;
  rating = 4.89;

  CWHVideo djvideo(title, rating, vlen);
  // djvideo.display();

  // For CWH text:
  title = "Django tutorial text";
  words = 499;
  rating = 4.19;

  CWHtext djtext(title, rating, words);
  // djtext.display();

  // Now creating everything as pointers

  CWH *tuts[2];
  tuts[0] = &djvideo;
  tuts[1] = &djtext;

  tuts[0]->display();
  tuts[1]->display();

  return 0;
}