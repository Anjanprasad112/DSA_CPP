#include <bits\stdc++.h>
using namespace std;

int main(){

    int arr[6] = {22,5,22,7,8,9}; 

    int n=6;
    int count;
    int i=0;
    int j=0;
    for( i=0; i<n; i++){
        int a=arr[i];
        for( j=0; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count==2){
            arr[i]=1;
            
            arr[j]=1;
            break;
        }
        }
        break;
        
    }

    for(int i=0;i<n;i++){
        cout<<"This is the array before: "<<arr[i]<<endl;
    }

    for(int step=0;i<n;i++){
        for(int x=0;x<n-step;x++){
            if(arr[x]>arr[x+1]){
                swap(arr[x],arr[x+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<"This is the array after: "<<arr[i]<<endl;
    }



}