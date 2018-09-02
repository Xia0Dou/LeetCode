#include <iostream>
//#include <string>
#include <cstring>

using namespace  std;

class Solution {
public:
    string reverseString(string s) {
        int len = s.length()-1;
        for(int i=0;i<s.length()/2;++i)
            swap(s[i],s[len--]);
        return s;
    }
};

int main() {
    Solution p;
    string s = "hello";

    cout<<p.reverseString(s);
    return 0;
}