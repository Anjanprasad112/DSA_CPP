#include <bits\stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }    
    //destructuring

     ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }


};
void insertionAtHead(Node* &head,int d){
        Node* temp = new Node(d);   
        temp ->next = head;
        head = temp;
    }

    void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<" "<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<endl;
    }
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;

}

void insertAtMiddle(Node* &tail,Node* &head,int postion , int data){
    Node* temp = head;
    if(postion==1){
        insertionAtHead(head,data);
        return;
    }

    int cnt=0;
    while(cnt<postion-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next ==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert-> next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}



int main(){
    Node* node1 = new Node(1);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    print(head);

    insertionAtHead(head,5);
    print(head);

    insertionAtHead(head,50);
    print(head);

    Node* tail = node1;
    insertAtTail(tail,77);
    print(head);

    insertionAtHead(head,66);
    insertAtTail(tail,99);
    print(head);


    insertAtMiddle(tail,head,2,100);
    print(head);

    deleteNode(7,head);
    print(head);








}