#include<bits\stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;

    }

};

void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
       
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<< temp->data << " ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

        }
        
    }

}

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data insert to the left of the node : "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data insert to the right of the node : "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}



int main(){
    node* root = NULL;

    root = buildTree(root);

    levelOrder(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}