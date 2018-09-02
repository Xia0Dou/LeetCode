#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        for(int i=nums.size()-1;i>=0;--i){
//            if(nums[i]==0){
//                for(int j=i;j<nums.size()-1;++j)
//                    nums[j] = nums[j+1];
//                nums[nums.size()-1] = 0;
//            }
//        }
//    }
//};


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0)
                nums[k++]  = nums[i];
        }
        while(k<nums.size())
            nums[k++] = 0;
    }
};


int main() {

    Solution p;
    vector<int> nums{0,1,0,0,2,0,3};
    p.moveZeroes(nums);
    for(int i=0;i<nums.size();++i)
        cout<<nums[i]<<ends;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}