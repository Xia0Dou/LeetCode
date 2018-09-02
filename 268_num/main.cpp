#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i)
            if(nums[i]!=nums[i+1]-1)
                return nums[i]+1;
        if(nums[nums.size()-1]!=nums.size()-1)
            return nums[nums.size()-1]+1;
        else
            return 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}