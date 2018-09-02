#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

class Soultion{
public:
    int tree(TreeNode *root){
        if(root==NULL)
            return 0;
        int left = tree(root->left) + 1;
        int right = tree(root->right) + 1;
        return max(left,right);
    }
};

//class Solution{
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        queue<TreeNode *> in;
//        vector<vector<int>> arr;
//        int j = 0;
//
//        in.push(root);
//
//        while(!in.empty()){
//
//            vector<int> temp;
//
//            int size = in.size();
//
//            for(int i=0;i<size;++i){
//
//                root = in.front();
//
//                temp.push_back(root->val);
//
//                in.pop();
//
//                if(root->left){
//                    in.push(root->left);
//
//                }
//
//                if(root->right){
//                    in.push(root->right);
//
//                }
//            }
//
//            arr.push_back(temp);
//        }
//        return arr;
//    }
//};


class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        queue<TreeNode *> we;

        if(root==NULL)
            return arr;

        we.push(root);

        while(!we.empty()){

            int size = we.size();

            vector<int> omg;

            for(int i=0;i<size;++i){

                root = we.front();

                cout<<root->val;
                omg.push_back(root->val);

                we.pop();

                if(root->left)
                    we.push(root->left);

                if(root->right)
                    we.push(root->right);
            }

            arr.push_back(omg);

        }

        return arr;
    }
};

int main() {
    TreeNode * s = new TreeNode(0);
    TreeNode * s1 = new TreeNode(1);
    TreeNode * s2 = new TreeNode(2);
    TreeNode * s3 = new TreeNode(3);

    s->left = s1;
    s->right = s2;
    s1->right = s3;

//    Soultion q;
//    cout<<q.tree(s);

    Solution p;
    vector<vector<int>> arr = p.levelOrder(s);

    for(int i=0;i<arr.size();++i){
        for(int j=0;j<arr[i].size();++j)
            cout<<arr[i][j]<<",";
        cout<<endl;
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}