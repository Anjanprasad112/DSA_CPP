#include <bits/stdc++.h>
using namespace std;

void func(int count , int ans){
    if(count > ans){
        return;
    }
    func(count+1,ans);
    cout<<count<<endl;
}

int main(){
    int ans = 5;
    int cnt = 0;
    func(cnt,ans);
}