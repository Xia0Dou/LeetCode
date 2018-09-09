#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

class Solution {        //跳跃问题,动态规划
public:
    bool canJump(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();++i)
            vec.push_back(0);

        vec[0] = 1;
        for(int i=0;i<nums.size();++i){
            if(vec[i]==0) continue;
            for(int j=i+1;j<i+1+nums[i];++j){
                if(j>nums.size())
                    break;
                vec[j] = 1;
            }
        }

        if(vec[nums.size()-1]==1)
            return true;
        return false;

    }
};


int main() {

    vector<int> vec{3,2,1,0,4};

    Solution p;

    cout<<p.canJump(vec);

    return 0;
}