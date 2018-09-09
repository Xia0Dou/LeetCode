#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

class Solution {            //无重复字符的最大字符串
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        if(s.length()==1)
            return 1;

        int mx = 0;
        int k = 0;
        int v = 0;

        for(int i=0;i<s.length();++i){

            for(int j=v;j<i;++j){
                if(s[j]==s[i]){
                    mx = max(mx,k);
                    k = -1;
                    i = j;
                    v = i+1;
                }

            }
            ++k;
        }
        return max(mx,k);

    }
};

int main() {

    vector<int> in{-1,0,1,2,-1,-4};


    Solution p;


    string s = "hhdddvfshe";
    cout<<p.lengthOfLongestSubstring(s);
    //vector<vector<int>> vec = p.threeSum(in);

    //string s(in);

//    for(int i=0;i<vec.size();++i){
//        for(int j=0;j<vec[i].size();++j)
//            cout<<vec[i][j]<<" ";
//        cout<<endl;
//    }


    return 0;
}