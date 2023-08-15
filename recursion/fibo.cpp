#include<bits\stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    int res1 = fibo(n-1);
    int res2 = fibo(n-2);
    return res1 + res2;
}

int main(){
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans<<endl;
}