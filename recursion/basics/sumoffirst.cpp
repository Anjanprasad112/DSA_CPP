#include <bits/stdc++.h>
using namespace std;

// void func(int no,int cnt){
//     if(no<1){
//         cout<<cnt<<endl;
//         return;
//     }
//     func(no-1,cnt+no);
    
// }

int func(int n){
    if(n==1){
        return 1;
    }
    return n * func(n-1);

}

int main(){
    int a = 5;
    int b = 0;
    int c = 0;
   int ans = func(a);
   cout<<ans<<endl;
}