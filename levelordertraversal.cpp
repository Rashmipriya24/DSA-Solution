#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};
TreeNode*