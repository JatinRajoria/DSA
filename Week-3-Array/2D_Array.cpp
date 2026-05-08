#include <iostream>
using namespace std;

int main(){
    // 1. declare 2D array
    // int arr[3][3];

    // 2. initialization
    // int brr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // cout<<brr[2][2]<<endl;

    // 3. row-wise print
    // outer loop
    // for(int i=0; i<3; i++){
    // for every row we need to print in each column
    //     for(int j=0; j<3; j++){
    //         cout<<brr[i][j];
    //     }
    //     cout<<endl;
    // }


    // 4. col-wise print
    // outer loop
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<brr[j][i];
    //     }
    //     cout<<endl;
    // }


    // 5. user input row-wise
    // int arr[4][3];
    // int rows = 4;
    // int cols = 3;

    // // row-wise input
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<"Printing row-wise: "<<endl;

    // // row-wise print
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<arr[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }



    // 6. user input col-wise
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // col-wise input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[j][i];
        }
    }

    cout<<"Printing col-wise: "<<endl;

    // col-wise print
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            // input col wise liya hai isliye normal print krenge
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}