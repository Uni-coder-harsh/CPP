// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // void fillMatrix(int a) {
// //     vector<vector<int>> matrix(a, vector<int>(a, 1)); // Initialize with 1
// //     // for (int i = 0; i < a; i++) {
// //     //     for (int j = 0; j < a; j++) {
// //     //         if (i == j)
// //     //             matrix[i][j] = 9; // Example: fill diagonals with 9
// //     //     }
// //     // }

// //     // Print the matrix
// //     for (int i = 0; i < a; i++) {
// //         for (int j = 0; j < a; j++) {
// //             cout << matrix[i][j] << " ";
// //         }
// //         cout << endl;
// //     }
// // }

// int main() {
//     int num;
//     cout << "Enter the size of the matrix: ";
//     cin >> num;
//     if (num > 0) {
//         fillMatrix(num);
//     } else {
//         cout << "Invalid size!" << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int a=4;
    int arr[a][a];
     for (int i = 0; i <a; i++)
     {
         for (int j = 0; j<a ; j++)
         {
             arr[i][j]={j};
             cout<<arr[i][j];
         }
         cout<<endl;
     }
  
    
}
