#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;

    }

    
};
TreeNode *buildTree(vector<int>arr){
    if(arr.empty()||arr[0]==-1){
        return NULL;
    }
    TreeNode *root=new TreeNode(arr[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i =1;
    while(!q.empty()&&i<arr.size()){
        TreeNode *curr=q.front();
        q.pop();
        if(i<arr.size()&&arr[i]!=-1){
            curr->left=new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;
        if(i<arr.size()&&arr[i]!=-1){
            curr->right=new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}
class Solution{
    public:
    bool check(TreeNode *root,long long low,long long high){
        if(root==NULL){
            return true;
        }
        if(root->val<=low||root->val>=high){
            return false;
        }
        return check(root->left,low,root->val)&&check(root->right,root->val,high);
    }
    bool isvalidBST(TreeNode * root){
        return check(root,LLONG_MIN,LLONG_MAX);

    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    TreeNode *root=buildTree(arr);
    Solution obj;
    cout<<boolalpha<<obj.isvalidBST(root)<<endl;
    return 0;
}
