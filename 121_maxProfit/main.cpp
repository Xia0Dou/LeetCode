#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        if(prices.empty()) return 0;
//        int mx = 0;
//        int n = 0;
//        for(int i=0;i<prices.size()-1;++i){
//            for(int j=i+1;j<prices.size();++j){
//                if(prices[j]>prices[i])
//                    n = prices[j] - prices[i];
//                if(n>mx)
//                    mx = n;
//            }
//        }
//        return mx;
//    }
//};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()||prices.size()==1) return 0;
        int mx = 0;
        int mn = prices[0];
        for(int i=1;i<prices.size();++i){
            mx = max(mx,prices[i]-mn);
            mn = min(mn,prices[i]);
        }
        return mx;
    }
};
int main() {

    vector<int> arr{7,1,5,3,6,4};
    Solution p;
    cout<<p.maxProfit(arr);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}