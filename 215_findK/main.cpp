#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    static  bool compare(const int &a,const int &b){
        return a>b;
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),compare);
        return nums[k-1];
    }
};

int main() {

    int s = 1;
    for(int i=1;i<=13;++i){
        s *= 13;
        s %= 1000;
    }
    std::cout<<s;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}