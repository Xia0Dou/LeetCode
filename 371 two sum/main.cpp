#include <iostream>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)  return a;
        int sum = a^b;
        int temp = (a&b)<<1;
        return getSum(sum,temp);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}