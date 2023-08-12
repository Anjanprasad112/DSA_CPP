#include <bits/stdc++.h>
using namespace std;

 string removeConsecutiveCharacter(string S)
    {
      string a;
      int i=0;
      while(i<S.size()){
          if(S[i]!=S[i+1]){
              a.push_back(S[i]);
          }
          i++;
      }
      return a;
    }

int main(){
    string a;
    cout<<"Enter the string : ";
    getline(cin, a);
    cout<<removeConsecutiveCharacter(a);
}