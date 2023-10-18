#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

vector<vector<int> > levelorder(Node* root){
        vector<vector<int> >> ans;
        if(root == NULL){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(root->left);
                if(node->right != NULL) q.push(root->right);
                level.push_back(node->data);

            }
        }
}

int main(){ 
    struct Node* root = new Node(1);
    // cout<<"hii"<<endl;
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl; 
    postorder(root);
    
    //level order traversal
    vector<vector<int> > ans;
    ans = levelorder(root);
}