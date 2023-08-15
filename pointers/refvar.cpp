#include <bits\stdc++.h>
using namespace std;

int& func(int a){
    int num = a+1;
    int& ans = num;
    return ans;
}

void update(int& n){
    n=n+1;
}

int main(){
    int n = 5;

    cout<<"Before : "<<n<<endl;
    // update(n);
    cout<<"func : "<<func(n)<<endl;
    cout<<"After : "<<n<<endl;
}