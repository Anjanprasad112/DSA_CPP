#include <bits/stdc++.h>
using namespace std;

void func(int ind,vector<int> &ds,int arr[],int n){
    if(ind == n){
        for(auto it : ds){
            cout<<it<<endl;
        }

        cout<<endl;
        if(ds.size() == 0){
        cout<<"{}"<<endl;
    }
        return;
    }
    

    ds.push_back(arr[ind]);
    func(ind+1,ds,arr,n);
    ds.pop_back();
    func(ind+1,ds,arr,n);

}

int main(){
    int arr[3] ={3,2,1};
    vector<int> ds;
    int ind = 0;
    int n = 3;
    func(ind,ds,arr,n);
}