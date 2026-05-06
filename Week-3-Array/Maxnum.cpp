// 1. find maximum no. in an array
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {2,3,1,6,8,0,9};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     // Initailize the maximum variable with the minimum possible integer value
//     int maxi = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i]>maxi){
//             maxi = arr[i];
//         }
//     }
//     cout<<"Maximum no. is: "<<maxi<<endl;
//     return 0;
// }



// 2. find minimum no. in an array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,1,6,8,0,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum no. is: "<<mini<<endl;
    return 0;
}