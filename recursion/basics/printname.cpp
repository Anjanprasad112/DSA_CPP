#include<bits/stdc++.h>
using namespace std;

void func(string ans , int cnt){
    if(cnt==5){
        return;
    }
    // cout<<ans<<endl;
    cout<<cnt<<endl;

    func(ans, cnt+1);
}

int main(){
    int a = 0;
    string ans ="Anjan";
    func(ans,a);
}