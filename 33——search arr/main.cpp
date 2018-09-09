#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {        //旋转排序数组，搜索数字
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left<=right){

            int mid = (left+right)>>1;
            //int temp = nums[left];

            if(nums[mid]>=nums[left]){
                if(target==nums[mid])
                    return mid;
                else if(target<nums[mid]&&target>=nums[left])
                    right = mid-1;
                else if(target>nums[mid]||target<nums[left])
                    left = mid+1;
            }

            else{
                if(target==nums[mid])
                    return mid;
                else if(target>nums[mid]&&target<=nums[right])
                    left = mid+1;
                else if(target<nums[mid]||target>nums[right])
                    right = mid-1;
            }

        }
        return -1;
    }
};


int main() {

    vector<int> in{5,1,2};

    Solution p;

    cout<<p.search(in,5);
//    vector<int> vec;
//
//    for(int i=0;i<vec.size();++i)
//        cout<<vec[i]<<" ";

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}