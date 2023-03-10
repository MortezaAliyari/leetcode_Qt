#include<iostream>

using namespace std;


enum menu{
  pizza1,
  pizza2,
  pizza3,
  pizza4,
  pizza5,
  pizza6,
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

  others

};

void takeorder(menu men){
  try {
    bool flag=0;
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
int main(){

  menu men;
  int order;
  cin>>order;
  men=(menu)order;
//  cout<<m<<endl;

  takeorder(drink3);
  cin.get();
}
