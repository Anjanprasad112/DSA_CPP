#include <bits\stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
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

void insertAtHead(Node* &head,int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = head->prev;
}
void insertAtTail(Node* &tail,int data)
{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}
void insertAtMiddle(Node* &tail,Node* &head,int position,int data){
    Node* temp = head;
    int cnt = 1;
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    
        while(cnt<position){
            temp = temp->next;
            cnt++;
        }
        if(temp->next == NULL){
            insertAtTail(tail,data);
            return;
        }
        Node* nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        nodeToInsert->prev = temp;
        temp->next = nodeToInsert;
    

}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        cout<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}



int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,5);
    print(head);

    insertAtHead(head,1);
    print(head);

    insertAtTail(tail,4);
    print(head);
    insertAtMiddle(tail,head,2,100);
    print(head);
    insertAtMiddle(tail,head,3,500);
    print(head);

    deleteNode(2,head);
    print(head);

    deleteNode(1,head);
    print(head);

    cout<<"The length of the Linked list is : "<<getlength(head)<<endl;
}