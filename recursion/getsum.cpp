#include <bits\stdc++.h>
using namespace std;

int getsum(int arr[],int size){
    if(size==0) return 0;
    if(size==1) return arr[0];
    int remainingPart = getsum(arr+1,size-1);
    int sum = arr[0] + remainingPart;
    return sum;

}

int main(){
    int arr[5]={1,2,4,5,6};
    int size = 5;
    int ans=getsum(arr,size);
    cout<<"Sum of array is : "<<ans<<endl;
    return 0;
}