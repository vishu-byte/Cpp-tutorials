#include<iostream>
using namespace std;

// Memort allocation
/*i) Objects and their individual variable values: personal  memory allocation
ii) Methods: common memory allocation
*/

//Arrays in class


//class Shop
/* Each object is a shop which has a list of items and their prices as arrays, and methods to set these lists and display them
*/

class Shop{

private:
  int itemId[100];
  int itemPrice[100];
  int counter;        //this is like a  static variable

public:
  void initcounter(void);
  void setPrice(void);
  void displayPrice(void);

};

void Shop :: initcounter(void){
  counter = 0;
}

void Shop :: setPrice(void){
  cout<<"Enter itemId of item " << counter << endl;
  cin>>itemId[counter];
  cout<<"Enter price of item " << counter << endl;
  cin>>itemPrice[counter];
  counter++;

}

void Shop :: displayPrice(void){
  for (size_t i = 0; i < counter; i++) {
    cout<<"Price of itemID "<<itemId[i]<<" is " <<itemPrice[i]<<endl;
  }


}

int main() {
  Shop dukaan;
  int num_of_items = 3;

  dukaan.initcounter();
  //For all items in dukaan

  for (size_t i = 0; i < num_of_items; i++) {
    dukaan.setPrice();
  }

  //displayPrice of all items in dukaan

  dukaan.displayPrice();

  return 0;
}
