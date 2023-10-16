#include <bits/stdc++.h>
using namespace std;

void func(int ans){
    if(ans<1){
        return;
    }

    func(ans-1);
    cout<<ans<<endl;

}

int main(){
    int a = 3;

    func(a);
}