#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};

Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right= insert(root->right,val);
    }
    return root;
}
int main(){
    int n;
    cin>>n;
    vector<int>postorder(n);
    for(int i =0;i<n;i++){
        cin>>postorder[i];
    }
    Node* root=NULL;
    for(int i=0;i<n;i++){
       root= insert(root,postorder[i]);
    }

    queue<Node*>q;
    q.push(root);
    vector<vector<int>>levels;
    while(!q.empty()){
        int size=q.size();
        vector<int>currentlevel;
        for(int i =0;i<size;i++){
            Node* node=q.front();
            q.pop();
            currentlevel.push_back(node->data);
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
            

        }
        levels.push_back(currentlevel);
    }
    int secondlast=levels.size()-2;
    for(int x:levels[secondlast]){
        cout<<x<<" ";
    }
    return 0;
}