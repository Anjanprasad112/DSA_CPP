#include <bits\stdc++.h>
using namespace std;

    class Node(){
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next =NULL;
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<val<<endl;
    }
    };

int main(){


}