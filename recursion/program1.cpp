#include <bits/stdc++.h>
using namespace std;

void func(int a){
    if(a>5){
        return;
    }
    cout<<"a : "<<a<<endl;

    func(a+1);
}

int main(){
    int a = 0;
    func(a);
}