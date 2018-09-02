#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int up = 1;
        for(int i=digits.size()-1;i>=0;--i){
            digits[i] += up;
            up = digits[i]/10;
            digits[i] = digits[i]%10;
            if(i==0&&up==1){
                digits.push_back(0);
                for(int i=digits.size()-1;i>0;--i)
                    digits[i] = digits[i-1];
                digits[0] = 1;
            }
        }
        return digits;
    }
};

int main() {

    Solution p;
    vector <int> v{9,9,9};
    v = p.plusOne(v);
    for(int i=0;i<v.size();++i)
        cout<<v[i]<<ends;

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}