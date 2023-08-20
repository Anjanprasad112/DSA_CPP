#include <bits\stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main (){
    
    Node* node1 = new Node(5);
    cout<<"node 1 data : "<<node1->data<<endl;
    cout<<"node 1 next : "<<node1->next<<endl;




}