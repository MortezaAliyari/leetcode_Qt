#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(find(nums.begin(),nums.end(),target)!=nums.end()){
//          cout<<"find it!"<<endl;
           return (find(nums.begin(),nums.end(),target)-nums.begin());
        }
        else {
          nums.insert(nums.begin(),target);
          sort(nums.begin(),nums.end());
          return (find(nums.begin(),nums.end(),target)-nums.begin());

        }
    }
};
int main(){
vector<int> v{1,3,4,8};
int tar=4;
Solution s;
cout<<s.searchInsert(v,tar)<<endl;

  return 0;
}
