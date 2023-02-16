#include <iostream>
#include<vector>
#include<numeric>
#include <algorithm>
using namespace std;
class Solution {
    public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // std::vector<int> res;

        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(std::begin(nums1), std::end(nums1));
        if(nums1.size()%2!=0)
            return nums1.at(int(nums1.size()/2));
        else
            return (nums1.at(int(nums1.size()/2))+nums1.at(int(nums1.size()/2 -1)))/2.0;

    }


};
int main()
{
    // cout<<"Hello World";
Solution sl;
vector<int> v1={2,1,1,4};
vector<int> v2={9,4,5};

cout<<sl.findMedianSortedArrays(v1,v2)<<endl;
    return 0;
}
