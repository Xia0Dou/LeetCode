#include <iostream>
#include <limits>
#include <vector>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution
{
    bool isValidBST( TreeNode* node, long min, long max )
    {
        if( !node )
            return true;
        if( node->val <= min || node->val >= max )
            return false;
        return isValidBST( node->left, min, node->val ) && isValidBST( node->right, node->val, max );
    }
public:
    bool isValidBST(TreeNode *root)
    {
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }
};


//class Solution
//{
//private:
//    vector<long> in;
//    void inOrder(TreeNode* root){
//        if(root!=NULL){
//            inOrder(root->left);
//            in.push_back(root->val);
//            inOrder(root->right);
//        }
//    }
//public:
//    bool isValidBST( TreeNode* root)
//    {
//        if(root==NULL)
//            return true;
//        inOrder(root);
//        for(int i=0;i<in.size()-1;++i){
//            if(in[i]>in[i-1])
//                return false;
//        }
//        return true;
//    }
//};






int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}