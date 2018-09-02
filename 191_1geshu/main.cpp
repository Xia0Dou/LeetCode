#include <iostream>

#include <vector>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        vector<int> out;
        int i;
        while(n){
            i = n%2;
            out.push_back(i);
            n -= (n/2 + i);
        }
        i = 0;
        for(int i=0;i<out.size();++i){
            if(out.at(i)==1)
                ++i;
        }
        return i;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}