#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        if(nums1.size()==0)
            return nums1;
        if(nums2.size()==0)
            return nums2;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int j=0,k=0;
        for(int i=0;i<nums1.size();){
            if(nums1[i]==nums2[j]){
                nums1[k++] = nums1[i];
                ++i;
                ++j;
            }
            else if(nums1[i]<=nums2[j])
                ++i;
            else
                ++j;
            if(j>=nums2.size())
                break;

        }
        nums1.resize(k);

        return nums1;
    }
};

int main() {
    Solution p;
    vector<int>nums1{1,6,3,3,4,4};
    vector<int>nums2{3,4,3};
    vector<int>num;
    num = p.intersect(nums1,nums2);
    cout<<num.size()<<endl;
    for(int i=0;i<nums1.size();++i)
        cout<<num[i]<<ends;


    return 0;
}