#include <bits\stdc++.h>
using namespace std;

bool reverse(string& name,int i,int j){
    if(i>j){
         return true;
    }
    if(name[i]==name[j]){
        i++; j--;
        bool ans = reverse(name,i,j);
        return ans;
    }
    else{
        return false;
    }
}

int main(){
    string name = "abdlsjdjfjsdljba";
    bool n=reverse(name,0,name.length()-1);
    if(n){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
}