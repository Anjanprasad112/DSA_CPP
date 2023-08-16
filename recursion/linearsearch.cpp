#include<bits\stdc++.h>
using namespace std;

bool linearsearch(int *arr,int size,int target){
    if(size==0) return false;
    if(target==arr[0]) return true;
    else{
    bool ans = linearsearch(arr+1,size-1,target);
    return ans;
    }
    // return true;
}

int main(){
    int arr[5] = {2,8,3,5,1};
    int size = 5;
    int target = 9;
    bool ans = linearsearch(arr,size,target);
    if(ans){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
}