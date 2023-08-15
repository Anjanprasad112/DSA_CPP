#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 100;
    int *ptr = &a;
    cout<<"a = "<<a<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    // (*ptr)++;
    a++;
    ptr = ptr + 1;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"*ptr = "<<*ptr<<endl;




}