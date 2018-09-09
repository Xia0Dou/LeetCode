#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {        //前k个高频元素

    static bool compare(const pair<int,int> &p1,const pair<int,int> &p2)
    {
        return p1.second>p2.second;
    }

public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> inmap;
        for(int i=0;i<nums.size();++i){
            auto temp = inmap.find(nums[i]);
            if(temp==inmap.end())
                inmap.insert(make_pair(nums[i],1));
            else
                temp->second++;
        }
        vector<pair<int,int> > arr;
        for(auto it=inmap.begin();it!=inmap.end();++it)
            arr.push_back(make_pair(it->first,it->second));

        sort(arr.begin(),arr.end(),compare);

        vector<int> vec;
        for(auto it=arr.begin();it!=arr.end()&&k>0;++it){
            vec.push_back(it->first);
            --k;
        }
        return vec;
    }
};

int main() {

    vector<int> num{3,3,3,5,6,2,2,5,7,7,7};

    Solution p;

    vector<int> vec = p.topKFrequent(num,5);

    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}