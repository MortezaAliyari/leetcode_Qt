#include<iostream>
#include<memory>
using namespace std;

enum menu:uint8_t{ // changin the size of enum int, long int ,uint8 just integer not double or flaot
  pizza1,
  pizza2,
  pizza3,
  pizza4,
  pizza5,
  pizza6=9,
  pizza7,
  sandwitch,
  bread,
  drink1,
  drink2,
  drink3,
  drink4,
  drink5,
  drink6,
  drink7,
a,b,d,f,g,h,j,k,le,r,t,
  others

} men1;

class mainresturant{
  public:
  enum menu:uint8_t{ // changin the size of enum int, long int ,uint8 just integer not double or flaot
    pizza1,
    sandwitch,
    bread,

    drink2,

    others

  };

  virtual void takeorder(menu men)=0;


};
class res1: public mainresturant{
  public:
    virtual void takeorder(mainresturant::menu men){
    try {
      bool flag=0;
      cout<<"Welcome to res1 branch!"<<endl;
      switch (men) {
      case pizza1: cout<< "you choosed pizza!!"<<endl;flag=1;break;
      case sandwitch: cout<< "you choosed sandwitch!!"<<endl;flag=1;break;
      case bread: cout<< "you choosed bread!!"<<endl;flag=1;break;
      case drink2: cout<< "you choosed drink!!"<<endl;flag=1;break;
      case others: cout<< "you choosed others!!"<<endl;flag=1;break;
      }
    if(!flag) throw men;
    } catch (menu men) {
      cout<<"Not valid order: "<<men<<endl;
    }

  }


};
class res2: public res1{
  public:
  void takeorder(mainresturant::menu men){
    try {
      bool flag=0;
      cout<<"Welcome to res2 branch!"<<endl;
      switch (men) {
      case pizza1: cout<< "you choosed pizza!!"<<endl;flag=1;break;
      case sandwitch: cout<< "you choosed sandwitch!!"<<endl;flag=1;break;
      case bread: cout<< "you choosed bread!!"<<endl;flag=1;break;
      case drink2: cout<< "you choosed drink!!"<<endl;flag=1;break;
      case others: cout<< "you choosed others!!"<<endl;flag=1;break;
      }
    if(!flag) throw men;
    } catch (menu men) {
      cout<<"Not valid order: "<<men<<endl;
    }

  }

  };


int main(){
  mainresturant::menu men2;
  int order=2;
//  cin>>order;
  men2=(mainresturant::menu)order;
//  res1 r2;
//  r2.takeorder(men2);

  res1* l1=new res1();
  res2* l2=new res2();
  mainresturant* main=l1;
  main->takeorder(men2);
  cout<<l1<<endl;

  cout<<l1<<endl;

{
  unique_ptr<res1> l3=make_unique<res1>();
  shared_ptr<res2> l4=make_shared<res2>();
  shared_ptr<res2> l5=l4;
//  cout<<(*l4).takeorder(men2)<<endl;
//  l2->takeorder(men2);
  l3->takeorder(men2);
}

  delete[] l1,l2;// deallocating the memory
  l1=NULL;
  l2=NULL;//not pointing any more



  cin.get();
}
