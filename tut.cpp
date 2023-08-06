#include <bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<v.size()<<endl;
// }
// string reverse(char a[],int b){

//     for(int i=0;i<b/2;i++){
//         swap(a[i],a[b-i-1]);
//     }
//     cout<<a<<endl;
//     return a;
// }

// bool palindrome(char a[],int b){
//     int s=0;
//     int e=b-1;
//     while(s<e){
//         if(a[s]!=a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//         return 1;
// }

// int main(){
// char a[100];
// cout<<"Enter a string: ";
// cin>>a;
// cout<<a<<endl;
// cout<<strlen(a)<<endl;
// int b = strlen(a);
// cout<<reverse(a,b)<<endl;
// cout<<palindrome(a,b);
//     }


// int main(){
//     string a;
//     cout<<"Enter a string: ";
//     cin>>a;
//     cout<<endl;
//     cout<<a;
// }

// int main(){
//     string a;
//    getline(cin,a);
//     cout<<"Enter a string: "<<a<<endl;
// }



int main(){
    string a;
    getline(cin,a);
    int index = 0;
    int arr[26]={0};
    for(int i=0;i<a.length();i++){
        int index = a[i]-'a';
        arr[index]++;
       cout<<index+'a'<<endl;
    }
    int max=-1;
    int length=sizeof(arr)/sizeof(int);
    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    char ch = index+'a';
    cout<<"this is arr: ";
    cout<<ch<<endl;
}