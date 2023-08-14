// #include <iostream>
// using namespace std;

// int main() {
//   string letters[2][4] = {
//     { "A", "B", "C", "D" },
//     { "E", "F", "G", "H" }
//   };

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 4; j++) {
//       cout << letters[i][j] << "\n";
//     }
//   }
//   return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int letters[2][4];
//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 4; j++) {
//       cin>> letters[i][j];
//     }
//     // cout<<endl;
//   }

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 4; j++) {
//       cout << letters[i][j] << " ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4];
    //row wise input and output
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//    for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


    //Column wise input and output
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}