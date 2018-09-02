#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;



struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

//struct compare{
//    bool operator()(const int &a,const int &b){
//        return a>b;
//    }
//};
//
//class Solution {
//public:
//    int count = -1;
//    multiset<int,compare> out;
//    int maxDepth(TreeNode* root) {
//
//        if(root==NULL)
//            return -1;
//        ++count;
//        if(!root->left) maxDepth(root->left);
//        out.insert(count);
//        if(!root->right) maxDepth(root->right);
//        out.insert(count);
//        auto t = out.begin();
//        return *t;
//    }
//};

class Solution {
public:

    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return -1;
        int left;
        int right;
        left = maxDepth(root->left) + 1;
        right = maxDepth(root->right) + 1;
        return max(left,right);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}