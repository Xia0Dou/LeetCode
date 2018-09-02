#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int k = 0;
        if(strs.size()==0)
            return s;
        while(1){
            if(k>strs[0].size())
                return s;
            char temp = strs[0][k];
            for(int i=1;i<strs.size();++i){
                if(k>strs[i].size()||strs[i][k]!=temp)
                    return s;
            }
            s += temp;
            ++k;
        }
    }
};

int main() {
    vector<string> str{"asdf","asgh","aser"};
    Solution p;
    cout<<p.longestCommonPrefix(str);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}