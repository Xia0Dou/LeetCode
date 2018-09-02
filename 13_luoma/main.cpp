#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman;
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        long sum = 0;

        for(int i=0;i<s.size();++i){
            auto s1 = roman.find(s[i]);
            auto s2 = roman.find(s[i+1]);
            if(s1->second>=s2->second)
                sum += s1->second;
            else
                sum -= s1->second;
        }
        return sum;
    }
};

int main() {
    Solution p;
    cout<<p.romanToInt("IVI");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}