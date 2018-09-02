#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        vector<int> vec;
        vector<int> oldnum;
        oldnum.push_back(n);
        while(n!=1){
            for(int i=0;n>0;++i){
                vec.push_back(n%10);
                vec[i] = vec[i]*vec[i];
                n /= 10;
            }
            for(int i=0;i<vec.size();++i)
                n += vec[i];

            vec.clear();
            for(int i=0;i<oldnum.size();++i)
                if(n==oldnum[i])
                    return false;
            oldnum.push_back(n);
        }
        return true;
    }
};


int main() {
    Solution p;
    cout<<p.isHappy(19);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}