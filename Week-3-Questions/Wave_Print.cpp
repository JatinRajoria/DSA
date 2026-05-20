// //Q. Wave Print a Matrix

// 1. One Way (using bitwise)
// #include <iostream>
// #include <vector>
// using namespace std;

// void wavePrintMatrix(vector <vector<int>> v){
//     int m = v.size();
//     int n = v[0].size();
//     for(int startCol = 0; startCol<n; startCol++){
//         // even no. of col -> top to bottom
//         if((startCol & 1) == 0){
//             for(int i=0; i<m; i++){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//         else{
//             // odd no. of col -> bottom to top
//             for(int i=m-1; i>=0; i--){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//     }
// }

// int main(){
//     vector <vector<int>> v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//         {17,18,19,20}
//     };
//     wavePrintMatrix(v);
//     return 0;
// }



//2.  Another way (simple way)
//    (col 0 tha to top to bottom fir 1 me bottom to top fir 2 me top to bottom fir 3 me bottom to top)
//    even no. -> top to bottom ,  odd no. -> bottom to top
#include<iostream>
using namespace std;

void wavePrint(int arr[][4], int rows, int cols){

    for(int col = 0; col < cols; col++){

        // Even column -> top to bottom
        if(col % 2 == 0){

            for(int row = 0; row < rows; row++){

                cout << arr[row][col] << " ";
            }
        }

        // Odd column -> bottom to top
        else{

            for(int row = rows - 1; row >= 0; row--){

                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){

    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows = 3;
    int cols = 4;

    wavePrint(arr, rows, cols);

    return 0;
}