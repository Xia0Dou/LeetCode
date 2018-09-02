#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();++i){
            for(int j=i;j<matrix[i].size();++j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();++i){
            int k = matrix[i].size()-1;
            for(int j=0;j<matrix[i].size()/2;++j){
                swap(matrix[i][j],matrix[i][k--]);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}