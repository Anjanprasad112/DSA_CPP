#include <bits\stdc++.h>
using namespace std;

int sumfunc(int* a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int n; 
    cout<<"Enter the size of an array : ";
    cin>>n;

    //creating a dynamic array using input size
    int* p = new int[n];

    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    int sum = sumfunc(p,n);
    cout<<"Sum of  the array : "<<sum<<endl;
}