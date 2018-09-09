#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

class Solution {            //零钱兑换，动态规划
public:
    int coinChange(vector<int>& coins, int amount) {

        if(coins.size()==0||amount==0)
            return 0;

        vector<int> vec(amount+1,amount+1);
        vec[0] = 0;

        for(int i=1;i<=amount;++i){
            for(int j=0;j<coins.size();++j){
                if(coins[j]<=i)
                    vec[i] = min(vec[i],vec[i-coins[j]]+1);
            }
        }

        if(vec[amount]==amount+1)   return -1;
        return vec[amount];
    }
};


int main() {

    vector<int> vec{1,3,5};

    Solution p;

    cout<<p.coinChange(vec,11);

    return 0;
}