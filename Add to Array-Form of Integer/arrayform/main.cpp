#include <QCoreApplication>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> itoarr;
    vector<int> addToArrayForm(vector<int>& num, int k) {
      vector<int> res;
      int_array(k);
      int car=0;
      int sum=0;
      for(int i=0;i<fmax(itoarr.size(),num.size());++i){

        if(i<fmin(itoarr.size(),num.size())){
          sum=itoarr.at(itoarr.size()-1-i)+num.at(num.size()-1-i)+car;
          if(sum>9){
            car=1;
          }
          else {
            car=0;
          }
          res.insert(res.begin(),sum%10);
        }
        else if (i<itoarr.size()) {
          sum=itoarr.at(itoarr.size()-1-i)+car;
          if(sum>9){
            car=1;
          }
          else {
            car=0;
          }
          res.insert(res.begin(),sum%10);
        }
        else {
          sum=num.at(num.size()-1-i)+car;
          if(sum>9){
            car=1;
          }
          else {
            car=0;
          }
          res.insert(res.begin(),sum%10);
        }


      }
      if(sum>9)
        res.insert(res.begin(),car);
      return res;
    }
    void int_array(int k){
      if(k==0){
        return;}
      else {
        itoarr.insert(itoarr.begin(),k%10);
        int_array(k/10);
      }
    }
};
int main()
{
  int p=8888;
  vector<int> num1={1,9,9,1,1,2,3,4,0};

  vector<int> res;
   Solution s;
//  s.int_array(p);
//  cout<<"int size : "<<s.itoarr.size()<<" array size : "<<num1.size()<<endl;
//  for (auto it=s.itoarr.begin();it<s.itoarr.end();++it) {
//    cout<<*it<<" ";

//  }
//  cout<<endl;
  res=s.addToArrayForm(num1,p);
  for (std::vector<int>::iterator it=res.begin();it<res.end();++it) {
    cout<<*it<<" ";

  }
  cout<<endl;
  return 0;
}
