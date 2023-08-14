#include <bits/stdc++.h>
using namespace std;

int rowwisesum(int arr[3][4],int row,int col){
    int a=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a=a+arr[i][j];
        }
        cout<<a<<" "<<endl;
        a=0;
    }
}

int main(){
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0;j<4;j++){
            // cout<<"Enter the element : "<<arr[i][j]<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<rowwisesum(arr,3,4)<<endl;
}