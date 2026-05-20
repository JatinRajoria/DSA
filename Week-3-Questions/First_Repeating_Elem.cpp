// // Find First Repeating Element
// // isme first repeatitive element 2 index pr isliye bta rhe hai kyuki 1 se le rhe hai index
// #include<iostream>
// #include<vector>
// using namespace std;

// int firstRepeated(vector<int> &arr) {
//     int n = arr.size();
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 return i + 1;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr{1,5,3,4,3,5,6};
//     int ans = firstRepeated(arr);
//     cout << "First Repeated Element Position is: "<< ans<< endl;
//     return 0;
// }


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