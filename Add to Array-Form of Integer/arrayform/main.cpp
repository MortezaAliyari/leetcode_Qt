#include <QCoreApplication>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> itoarr;
    vector<int> addToArrayForm(vector<int>& num, int k) {

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
  int p=18;
  vector<int> res;
   Solution s;
  s.int_array(p);
  cout<<"befor : "<<s.itoarr.size()<<endl;
  for (auto it=s.itoarr.begin();it<s.itoarr.end();++it) {
    cout<<*it<<" ";

  }
  cout<<endl;
  return 0;
}
