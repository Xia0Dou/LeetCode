#include <iostream>
#include <vector>
#include <map>
using namespace std;

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> sum;
//        for(int i=0;i<nums.size()-1;++i){
//            for(int j=i+1;j<nums.size();++j){
//                if(nums[i]+nums[j]==target){
//                    sum.push_back(i);
//                    sum.push_back(j);
//                    return sum;
//                }
//
//            }
//        }
//    }
//};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> inmap;
        for(int i=0;i<nums.size();++i){
            int num = target - nums[i];
            auto flag = inmap.find(num);
            if(flag!=inmap.end()){
                vector<int> sum{i,flag->first};
                return sum;
            }
            inmap[nums[i]] = i;
        }
    }
};


int main() {
    Solution p;
    vector<int> nums{0,1,0,0,2,0,3};
    nums = p.twoSum(nums,3);
    for(int i=0;i<nums.size();++i)
        cout<<nums[i]<<ends;

    return 0;
}