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

    TreeNode* sortedArrayToBST(vector<int>& nums,int start,int end){

        if(start>end){
            return NULL;
        }
        int mid = (start+end)>>1;               //设置中间值为父节点，保证平衡

        TreeNode *root = new TreeNode(nums[mid]);         //新建节点

        root->left = sortedArrayToBST(nums,start,mid-1);   //小于中间值为左孩子
        root->right = sortedArrayToBST(nums,mid+1,end);    //大于中间值为右孩子

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;

        int start = 0;
        int end = nums.size()-1;
        //int mid = (start+end)>>1;

        //TreeNode *root = new TreeNode(nums[mid]);

        return sortedArrayToBST(nums,start,end);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}