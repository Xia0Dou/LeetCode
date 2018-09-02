#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int sa[26] = {0};
        int ta[26] = {0};

        for(int i=0;i<s.size();++i){
            sa[s[i]-97]++;
            ta[t[i]-97]++;
        }
        for(int i=0;i<26;++i){
            if(sa[i]!=ta[i])
                return false;
        }

        return true;
    }
};

int main() {

    Solution p;
    cout<<p.isAnagram("anagram","nagaram");

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}