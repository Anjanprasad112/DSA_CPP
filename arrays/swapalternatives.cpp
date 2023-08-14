#include<bits/stdc++.h>
using namespace std;

void swapalternative(int arr[],int n){
    int a=0;
    if(n%2!=0){
        a=1;
    }

    for(int i=0;i<n-a;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[1000];
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the array index "<<i<<" : ";
        cin>>arr[i];
    }
    swapalternative(arr,n);

     for(int i=0;i<n;i++){
        cout<<"Enter the array index "<<i<<" : ";
        cout<<arr[i]<<endl;
    }
}