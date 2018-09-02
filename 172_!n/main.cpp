#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {

        int count = 2*(n/10);

        if(n%10>=5)
            ++count;

        count += n/25;

        return count;
    }
};
int main() {

    Solution p;
    cout<<p.trailingZeroes(30);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}