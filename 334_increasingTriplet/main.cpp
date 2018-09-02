#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//
//
//    }
//};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0 = 0;
        int n1 = 0;
        int n2 = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0)
                ++n0;
            else if(nums[i]==1)
                ++n1;
            else
                ++n2;
        }

        nums.clear();

        for(int i=0;i<n0;++i)
            nums.push_back(0);
        for(int i=0;i<n1;++i)
            nums.push_back(1);
        for(int i=0;i<n2;++i)
            nums.push_back(2);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}