#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int count = 0;
        while(n){
            if(n%2==1)
                ++count;
            n /= 2;
        }
        return count;
    }
};

int main() {
    Solution p;
    cout<<p.hammingDistance(1,4);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}