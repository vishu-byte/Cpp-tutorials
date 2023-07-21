#include <iostream>
using namespace std;

class ShopItem {
private:
  int id;
  float price;

public:
  void setData(int a, int b) {
    id = a;
    price = b;
  }
  void getData(void) {
    cout << "(Id, price): "
         << "(" << id << ", " << price << ")" << endl;
  }
};

int main() { 
  int size = 3;   // on stack

  ShopItem *ptr = new ShopItem[size];   // reserving memory on heap for three Shop objects
  
  ShopItem *ptrTemp = ptr;
  //Three items as objects: general store item, veggies item, hardware item

 int p;
 float q;
 for (int i = 0; i < size; i++) {
   cout << "Enter id and price of item "<<i+1<<endl;
   cin >>p >> q ;

   (ptr+i)->setData(p, q);
 
 }
 
ptr->getData();
(ptr+1)->getData();
(ptr+2)->getData();
return 0; }