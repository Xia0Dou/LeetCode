#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        TreeNode * node1 = root;
//        TreeNode * node2 = root;
//        TreeNode * node3;
//        TreeNode * node4;
//        while(node1->val == node2->val){
//            if(node1->left->right) node3 = node1->left->right;
//            if(node2->right->left) node4 = node2->right->left;
//
//            while(node1!=NULL||node2!=NULL){
//                if(node1->left!=NULL&&node2->right!=NULL&&node1->val == node2->val){
//                    node1 = node1->left;
//                    node2 = node2->right;
//                } else
//                    return false;
//            }
//            node1 = node3;
//            node2 = node4;
//        }
//    }
//    return true;
//};

class Solutio{
    bool dp(TreeNode *root1,TreeNode *root2){
        if(root1==NULL&&root2==NULL)
            return true;
        if(root1==NULL||root2==NULL)
            return false;
        if(root1->val==root2->val)
            return dp(root1->left,root2->right);
        else
            return false;
    }
public:
    bool dp(TreeNode *root){
        if(root==NULL)
            return true;
        return dp(root->left,root->right);
    }
};


//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        if(root==NULL||root->left==NULL&&root->right==NULL)
//            return true;
//        stack<TreeNode *> st1;
//        stack<TreeNode *> st2;
//        if(root->left!=NULL)  st1.push(root->left);
//        if(root->right!=NULL) st2.push(root->right);
////        if(st1.size()!=st2.size())
////            return false;
//        TreeNode *s1 ;
//        TreeNode *s2 ;
//
//        while(!st1.empty()||!st2.empty()){
//            if(st1.size()!=st2.size())
//                return false;
//            s1 = st1.top();
//            s2 = st2.top();
//
//            if(s1 == NULL && s2 == NULL)
//                break;
//
//            if (s1 == NULL || s2 == NULL)
//                return false;
//
//            if(s1->val == s2->val){
//
//                st1.pop();
//                st2.pop();
//
//                st1.push(s1->left);
//                st1.push(s1->right);
//
//                st2.push(s2->right);
//                st2.push(s2->left);
//            } else
//                return false;
//        }
//        if(st1.size()!=st2.size())
//            return false;
//        return true;
//    }
//};

class Solution{
    bool isSymmetric(TreeNode *root1,TreeNode *root2){
        if(root1==NULL&&root2==NULL)
            return true;
        if(root1==NULL||root2==NULL)
            return false;
        if(root1->val==root2->val)
            return isSymmetric(root1->left,root2->right)
            &&isSymmetric(root1->right,root2->left);
        else
            return false;
    }
public:
    bool isSymmetric(TreeNode *root) {
        if(root==NULL)
            return true;
        return isSymmetric(root->left,root->right);
    }
};


int main() {

    TreeNode * s = new TreeNode(2);
    TreeNode * s1 = new TreeNode(3);
    TreeNode * s2 = new TreeNode(3);
    TreeNode * s3 = new TreeNode(4);
    TreeNode * s4 = new TreeNode(5);
    TreeNode * s5 = new TreeNode(5);


    s->left = s1;
    s->right = s2;
    s1->left = s3;
    s1->right = s4;
    s2->left = s5;


    Solutio p;
    cout<<p.dp(s);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}