#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int> sum {nums[0],max(nums[0],nums[1])};
        for(int i=2;i<nums.size();++i){
            sum.push_back(max((nums[i]+sum[i-2]),sum[i-1]));
        }
        return sum.back();
    }
};

int main() {
    Solution p;
    vector<int> arr{1,2,3,9,5};
    cout<<p.rob(arr)<<endl;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}