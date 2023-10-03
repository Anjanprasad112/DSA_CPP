#include <bits\stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtFront(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtBack(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    // temp->next = NULL;
}

void insertAtMiddle(Node* &head,int d,int p){
    Node* temp = head;
    int cnt = 1;

    while(cnt< p-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(Node* &head,int d){
    Node* temp = head;
    Node* tempnext = temp -> next;
    while(tempnext->data!=d){
        tempnext = tempnext->next;
        temp = temp -> next;
    }
    temp->next = tempnext->next;
   

}

void print(Node* &head){
   Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){
    Node* node1 = new Node(10);
    // insertAtFront(node1,12);
    // insertAtFront(node1,16);
    // insertAtBack(node1,1);

    Node* &head = node1;
    Node* &tail = node1;
    // print(head);

    // insertAtFront(tail,12);
    // insertAtBack(head,1);
    // insertAtBack(head,3);
    // // insertAtFront(head,100);
    // insertAtBack(head,5);
insertAtFront(tail,100);
insertAtFront(tail,5);
insertAtFront(tail,1);
    
    print(head);
    cout<<endl;

insertAtMiddle(head,420,2);
insertAtMiddle(head,3003,2);

    print(head);
    cout<<endl;
    deleteNode(head,420);
    print(head);




    
    // print(node1);
}