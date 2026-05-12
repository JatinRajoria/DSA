// Maximum no. and Minimum no. find out krna hai 2D array me
#include <iostream>
#include <limits.h>
using namespace std;

// Maximum no.
int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

// Minimum no.
int getMini(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
        int arr[3][3];
    int rows = 3;
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
    
    cout <<" Max Number: " << getMax(arr, rows, cols) << endl;

    cout <<" Mini Number: " << getMini(arr, rows, cols);
    return 0;
}