#include <iostream>
#include <map>
#include <vector>

using namespace std;


class Solution {                //众数
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mx;

        for(int i=0;i<nums.size();++i){
            auto temp = mx.find(nums[i]);
            if(temp!=mx.end())
                ++temp->second;
            else
                mx.insert(pair<int,int>(nums[i],1));
        }
        int size = nums.size();
        for(auto temp = mx.begin();temp!=mx.end();++temp){
            if(temp->second>(size>>1))
                return temp->first;
        }
        return 0;
    }
};


int main() {
    vector<int> arr{2,2,1,1,1,2,2};

    Solution p;

    cout<<p.majorityElement(arr)<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}