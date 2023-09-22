#include <bits\stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    //basecase
    if(s.empty()) {
        s.push(element);
      	return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    insertAtBottom(s, element);
    
    s.push(num);
}

void reverseStack(stack<int> &stack) {
  	//base case
    if(stack.empty()) {
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}

// int insertatbottom(){

// }

// int reverse(stack <int> &stack,int num) {
//     //base case
//     if(stack.empty()) return;

// }



int main(){
    stack<int> a;
    int n;
    int b;
    cout<<"enter the size of the stack  : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>b;
        a.push(b);
    }
    cout<<"printing the whole stack : ";
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }

    reverseStack(a);
    cout<<"printing the whole stack : ";
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;

}