// Missing Elements from an array with duplicates (using negative method)
// 1. one way

// #include <bits/stdc++.h>
// using namespace std;

// void findMissing(int *arr, int n){

//     // Mark visited elements
//     for(int i = 0; i < n; i++){

//         // abs isliye use kiya
//         // kyuki element pehle se negative ho sakta hai
//         int index = abs(arr[i]);

//         // index - 1
//         // kyuki indexing 0 se start hoti hai
//         if(arr[index - 1] > 0){

//             arr[index - 1] *= -1;
//         }
//     }

//     // Missing elements print karo
//     for(int i = 0; i < n; i++){

//         // Positive matlab missing
//         if(arr[i] > 0){

//             cout << i + 1 << " ";
//         }
//     }
// }

// int main(){

//     int arr[] = {1,3,5,3,4};

//     int n = sizeof(arr) / sizeof(int);

//     findMissing(arr, n);

//     return 0;
// }



// 2. Another way
// Missing Elements from an array with duplicates (using sorting method)

#include <bits/stdc++.h>
using namespace std;

int findMissing(int *arr, int n){

    int i = 0;

    while(i < n){

        int index = arr[i] - 1;

        if(arr[i] != arr[index]){

            swap(arr[i], arr[index]);
        }

        else{

            i++;
        }
    }

    // Missing elements find
    for(int i = 0; i < n; i++){

        if(arr[i] != i + 1){

            return i + 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {1,3,5,3,4};

    int n = sizeof(arr) / sizeof(int);

    int ans = findMissing(arr, n);

    cout << "Missing element is: "
         << ans;

    return 0;
}