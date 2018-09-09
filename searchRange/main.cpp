#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {            //查找元素target的起始和终止位置
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec{-1,-1};

        int left = 0;
        int right = nums.size()-1;

//        if(left==right&&nums[left]==target){
//            vec.clear();
//            vec.push_back(0);
//            vec.push_back(0);
//        }


        while(left<=right){

            int mid = (left+right)>>1;

            if(target>nums[mid])
                left = mid+1;
            else if(target<nums[mid])
                right = mid-1;
            else
            {
                vec.clear();

                int i = mid;
                int j = mid;

                while(i-1>=0&&nums[i-1]==nums[mid])
                    --i;
                vec.push_back(i);

                while(j+1<nums.size()&&nums[j+1]==nums[mid])
                    ++j;
                vec.push_back(j);
                break;
            }
        }
        return vec;
    }
};

int main() {

    vector<int> in{4};

    Solution p;

    vector<int> vec = p.searchRange(in,4);

    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}