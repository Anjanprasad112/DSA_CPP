#include <bits\stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertionAtFront(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = head->prev;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}

void insertAtPosition(Node* &head,int d,int p){
    Node* mid = head;
    int cnt = 1;
    while(cnt<p-1){
        mid = mid->next;
        cnt++;
    }
    Node * temp = new Node(d);
    temp->next = mid->next;
    temp->prev = mid;
    mid->next = temp;
    Node *tempnext = temp->next;
    tempnext -> prev = mid;



}

void deletenode(Node* head,int d){
    Node* temp = head;
    Node* tempnext = temp->next;
    while(tempnext->data != d){
        temp = temp -> next;
        tempnext = tempnext -> next;
    }
    Node* temptemp = tempnext -> next;
    temp-> next = tempnext->next;
    temptemp->prev = temp;
    
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertionAtFront(head,1);
    insertAtTail(tail,11);
    insertAtTail(tail,12);
    insertAtPosition(head,2,2);
    deletenode(head,10);


    print(head);
}