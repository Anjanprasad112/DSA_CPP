#include<bits\stdc++.h>
using namespace std;

int power(int n){
    //base condition or case
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}

int main(){
    int n=5;
    int ans =power(n);
    cout<<"the power is : "<<ans<<endl;
}