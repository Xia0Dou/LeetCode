#include <iostream>
#include <vector>


using namespace std;


struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

class Solution {

    vector<int> vec;
    vector<int> inOrder(TreeNode *root){

        if(root==NULL)
            return vec;

        inOrder(root->left);
        vec.push_back(root->val);
        inOrder(root->right);

        return vec;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return 0;
        inOrder(root);
        return vec[k-1];
    }
};
int main() {
    TreeNode *s = new TreeNode(3);
    TreeNode *s1 = new TreeNode(1);
    TreeNode *s2 = new TreeNode(2);
    TreeNode *s3 = new TreeNode(4);

    s->left = s1;
    s->right = s3;
    s1->right = s2;

    Solution p;
    cout<<p.kthSmallest(s,4)<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}