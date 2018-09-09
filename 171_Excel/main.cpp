#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size()-1;
        int i = 0;
        int sum = 0;
        while(len>=0){
            sum += (s[len]-'A'+1)*pow(26,i);
            --len;
            ++i;
        }
        return sum;
    }
};


int main() {

    vector<int> in{5,1,2};


    Solution p;

    cout<<p.titleToNumber("ZY");


    return 0;
}