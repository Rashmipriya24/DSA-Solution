#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int data){
        val = data;
        left=right=NULL;
    }
};
class solution{
    public:
    int maxDepth(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return 1+max(leftDepth,rightDepth);
    }
};
TreeNode* buildTree(){
    int data;
    cout<<"Enter node value(-1 for NULL)";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    TreeNode* root = new TreeNode(data);
    root->left=buildTree();
  root->right=buildTree();
  return root;

}
int main(){
    TreeNode* root=buildTree();
    solution obj;
    int ans = obj.maxDepth(root);
    cout<<ans;
    return 0;
}