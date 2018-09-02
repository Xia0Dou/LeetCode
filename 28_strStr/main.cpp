#include <iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        for(int i=0;i<haystack.length();){
            int k = i;
            int j = 0;
            while(j<needle.length()&&haystack[i]==needle[j]){
                ++i;
                ++j;
            }
            if(j==needle.length())
                return k;
            else
                i = k + 1;
        }
        return -1;
    }
};
int main() {
    Solution p;
    cout<<p.strStr("","issip");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}