#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

class Solution {


    void dfs(vector<vector<char>>& visited,int i,int j){
        if(i<0||i>=visited.size()||j<0||j>=visited[0].size()||visited[i][j]=='0')
            return;

        visited[i][j] = '0';

        dfs(visited,i-1,j);
        dfs(visited,i+1,j);
        dfs(visited,i,j-1);
        dfs(visited,i,j+1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        
        vector<vector<char>> visited(grid);
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                
                if(visited[i][j]=='1'){
                    dfs(visited,i,j);
                    ++count;
                }
            }
        }
        return count;

    }
};


int main() {

    vector<vector<char>> vec{{'1','1','0','0'},
                             {'1','1','0','0'},
                             {'0','1','1','0'},
                             {'0','0','0','1'}};

    Solution p;

    cout<<p.numIslands(vec);

    return 0;
}