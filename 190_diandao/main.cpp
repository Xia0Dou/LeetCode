#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//class Solution {
//public:
//    uint32_t reverseBits(uint32_t n) {
//        vector<int> in;
//        while(n){
//            in.push_back(n%2);
//            n /= 2;
//        }
//        while(in.size()!=32)
//            in.push_back(0);
//        cout<<in.size()<<endl;
//        uint32_t out = 0;
//        int t = in.size()-1;
//        for(int i=0;i<in.size();++i,--t)
//            out += in[i]*pow(2,t);
//        return out;
//    }
//};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t out = 0;
        int count = 0;
        int temp;
        while(n){
            out = out*2 + n%2;
            n /= 2;
            ++count;
        }
        for(int i=count;i<32;++i)
            out *= 2;
        return out;
    }
};


int main() {
    Solution p;
    cout<<p.reverseBits(43261596);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}