#include <iostream>
using namespace std;

// ye func print kr rha hai isliye void hoga
void printRowWiseSum(int arr[][3], int rows, int cols){
    // row sum -> row wise traversal
    cout<<"Printing row wise sum: "<<endl;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){
   // 5. user input row-wise
    int arr[4][3];
    int rows = 4;
    int cols = 3;

    // row-wise input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing row-wise: "<<endl;

    // row-wise print
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    printRowWiseSum(arr, rows, cols);

}