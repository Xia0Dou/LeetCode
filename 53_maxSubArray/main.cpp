#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        if(nums.empty()) return 0;
//        int max = nums[0];
//        int sum;
//        for(int i=0;i<nums.size();++i){
//            for(int j=i;j<nums.size();++j){
//                for(int k=i;k<=j;++k)
//                    sum += nums[k];
//                if(max<sum)
//                    max = sum;
//            }
//        }
//        return max;
//    }
//};

//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        if(nums.empty()) return 0;
//        int max = nums[0];
//        int sum = nums[0];
//        for(int i=1;i<nums.size();++i){
//            if(sum>0)
//                sum += nums[i];
//            else
//                sum = nums[i];
//            if(max<sum)
//                max = sum;
//        }
//        return max;
//    }
//};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int max1 = nums[0];
        vector<int> vec;
        vec.push_back(max1);
        for(int i=1;i<nums.size();++i){
            vec.push_back(max(vec.back()+nums[i],nums[i]));
            if(vec.back()>max1)
                max1 = vec.back();
        }
        return max1;
    }
};

int main() {
    vector<int> arr{-1,0,0,2,-1,-1,3};
    Solution p;
    cout<<p.maxSubArray(arr);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}