#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {            //每个节点的右向指针，使每一层的节点指向它右边的节点
public:
    void connect(TreeLinkNode *root) {

        if(root==NULL)
            return;

        queue<TreeLinkNode *> inque;
        inque.push(root);

        while(!inque.empty()){

            int size = inque.size();
            int j = 0;

            for(int i=0;i<size;++i){
                root = inque.front();
                inque.pop();
                ++j;

                if(j>=size)
                    root->next = NULL;
                else
                    root->next = inque.front();
                cout<<root->val<<"->"<<root->next<<"\t";

                if(root->left)  inque.push(root->left);
                if(root->right) inque.push(root->right);
            }
            cout<<endl;
        }
    }
};


int main() {

    TreeLinkNode *s1 = new TreeLinkNode(1);
    TreeLinkNode *s2 = new TreeLinkNode(2);
    TreeLinkNode *s3 = new TreeLinkNode(3);
    //TreeLinkNode *s4 = new TreeLinkNode(4);
    //TreeLinkNode *s5 = new TreeLinkNode(5);

    s1->left = s2;
    s1->right = s3;
    //s2->right = s4;
    //s4->right = s5;

    Solution p;

    p.connect(s1);

    return 0;
}