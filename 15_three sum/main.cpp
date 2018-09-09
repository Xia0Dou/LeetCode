#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;


class Solution {    //三数之和为0
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sum;
        if(nums.size()==0||nums.size()==1||nums.size()==2)
            return sum;
        vector<int> temp;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            int j = i+1;
            int k = nums.size()-1;
            int v = -nums[i];

            while(j<k){
                if(nums[j]+nums[k]==v){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    sum.push_back(temp);
                    for(int a=0;a<sum.size()-1;++a) {
                        if(temp==sum[a])
                            sum.pop_back();
                    }
                    temp.clear();
                    ++j;
                    --k;
                }
                else if(nums[j]+nums[k]<v)
                    ++j;
                else
                    --k;
            }

        }

        return sum;
    }
};


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
//                        sort(temp.begin(),temp.end());
//
//                        sum.push_back(temp);
//
//                        for(int a=0;a<sum.size()-1;++a) {
//                            if(temp==sum[a])
//                                sum.pop_back();
//                        }
//                        temp.clear();
//                    }
//
//                }
//            }
//        }
//
//
//        return sum;
//    }
//};


int main() {

    vector<int> in{-1,0,1,2,-1,-4};
    vector<int> in1{-1,0,1,2,-1,-4};
    bool k = (in==in1);

    cout<<k<<endl;

    Solution p;

    vector<vector<int>> vec = p.threeSum(in);

    //string s(in);

    for(int i=0;i<vec.size();++i){
        for(int j=0;j<vec[i].size();++j)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}