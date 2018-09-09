#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

class Solution {            //矩阵置零
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> in;
        vector<int> temp;
        for(int i=0;i<matrix.size();++i){        //存储0的位置信息
            for(int j=0;j<matrix[i].size();++j){
                if(matrix[i][j]==0){
                    temp.push_back(i);
                    temp.push_back(j);
                    in.push_back(temp);
                    temp.clear();
                }
            }
        }

        for(int i=0;i<in.size();++i){       //行置零
            for(int j=0;j<matrix[in[i][0]].size();++j){
                matrix[in[i][0]][j] = 0;
            }
        }

        for(int i=0;i<in.size();++i){       //列置零
            for(int j=0;j<matrix.size();++j){
                matrix[j][in[i][1]] = 0;
            }
        }
    }
};

int main() {

    vector<int> in{-1,0,1,2,-1,-4};


    Solution p;

    vector<vector<int>> vec = p.threeSum(in);

    //string s(in);

    for(int i=0;i<vec.size();++i){
        for(int j=0;j<vec[i].size();++j)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}