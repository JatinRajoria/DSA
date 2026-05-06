// 1. Program to print Reverse in an Array using swap function

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,20,30,40,50,60,70};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int start = 0;
//     int end = size-1;
//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



// 2. Program to print Reverse in an Array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}