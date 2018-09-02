#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if(m==0) {
            for(int i=0;i<nums1.size();++i)
                nums1.at(i) = nums2.at(i);
        }
        vector<int> s1(nums1);
        int i = 0;
        int j = 0;
        int k = 0;
        while(m>0&&n>0){
            if(s1.at(i)<=nums2.at(j))
                nums1.at(k++) = s1.at(i++);
            else
                nums1.at(k++) = nums2.at(j++);
            if(i<m&&j==n){
                while(i<m)
                    nums1.at(k++) = s1.at(i++);
                break;
            }
            if(i==m&&j<n){
                while(j<n)
                    nums1.at(k++) = nums2.at(j++);
                break;
            }
        }
    }
};

int main() {
    vector<int>sum1{1,2,3,0,0,0};
    vector<int>sum2{1,4,5};

    Solution p;
    p.merge(sum1,3,sum2,3);

    for(int i=0;i<sum1.size();++i)
        cout<<sum1.at(i)<<endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}