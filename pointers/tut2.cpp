#include <bits\stdc++.h>
using namespace std;

int main(){
    int arr[10];
    // cout<<sizeof(arr)<<endl;
    // char ch;
    // cout<<sizeof(ch)<<endl;

    // string str;
    // cout<<sizeof(str)<<endl;
    int a = 5;
    int *p = &a;

    cout<<"address of p : "<<p<<endl;
    p=p+1;
    cout<<"after address of p : "<<p<<endl;

    char ch[5] = "abcd";
    char *ptr = &ch[0];

    cout<<"address of ptr : "<<*ptr<<endl;
}