#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> sum;
//        if(nums.size()==0||nums.size()==1||nums.size()==2)
//            return sum;
//        vector<int> temp;
//        for(int i=0;i<nums.size()-2;++i){
//            for(int j=i+1;j<nums.size()-1;++j){
//                for(int k=j+1;k<nums.size();++k){
//                    if(nums[i]+nums[j]+nums[k]==0){
//                        temp.push_back(nums[i]);
//                        temp.push_back(nums[j]);
//                        temp.push_back(nums[k]);
//
//                            //if(temp!=sum[i]){
//                                sum.push_back(temp);
//                                temp.clear();
//                            //}
//
//
//                    }
//
//                }
//            }
//        }
//        return sum;
//    }
//};

class Solution {
public:
    double myPow(double x, int n) {
        double num = 1.0;
        if(n>=0){
            for(int i=0;i<n;++i)
                num *= x;
        }
        else{
            n = -n;
            for(int i=0;i<n;++i)
                num /= x;
        }
        return num;
    }
};

int main() {

    Solution p;
    cout<<p.myPow(0.01,4343423664);
    //cout<<pow(2,31);
//    vector<int> arr{-1,0,1,2,-1,-4};
//    Solution p;
//    p.threeSum(arr);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}