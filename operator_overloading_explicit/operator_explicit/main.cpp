#include<iostream>
#include<string>
#include<list>
using namespace std;

struct youtubechannel{
  int subscribers;
  string Name;
  youtubechannel(int ns, string name){
    subscribers=ns;
    Name=name;
    cout<<"Constructer is on !"<<endl;
  }
  ~youtubechannel(){cout<<"Deconstructer is on !"<<endl;}
  bool operator==(const youtubechannel& youtubec){ // the reason we are using const is becuase of remove member of list source file has const argument as input!
    return this->Name==youtubec.Name;
  }
};

ostream& operator<<(ostream& cout1,youtubechannel& yt){
  cout1<<"Name of channel: "<<yt.Name<<" , Number of Subscribers: "<<yt.subscribers<<endl;
  return cout1;
}

struct Mysubchannels{
  list<youtubechannel> l;
  void operator+=(youtubechannel& yt){
    l.push_back(yt);
    cout<<"one channel added!"<<endl;

  }
  void operator-=(youtubechannel& yt){
    this->l.remove(yt);

  }

};

ostream& operator<<(ostream& cout2,Mysubchannels& my){
  for (youtubechannel& i:my.l){
    cout2<<i<<endl;
  }
  return cout2;
}
int main(){
  youtubechannel yt1=youtubechannel(1000,"yt1");
  youtubechannel yt2=youtubechannel(2000,"yt2");
  Mysubchannels msc;
  msc+=yt1;
  msc+=yt2;
  cout<<msc<<endl;
  msc-=yt1;
  cout<<yt1<<yt2;
  if(yt1==yt2)
    cout<<"same"<<endl;
  else if (2==2) {
    cout<<"not same"<<endl;

  }
  return 0;
}
