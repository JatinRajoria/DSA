// Insertion Sort
//
// Idea:
//
// Sorted part      Unsorted part
// [10]             [1 7 6 14 9]
//
// Har round me ek element uthayenge (val)
// Aur usko sorted part me uski correct position par insert karenge.
//
// Example:
//
// 10 1 7 6 14 9
//
// Round 1:
// val = 1
//
// 10 > 1
//
// Shift:
// 10 10 7 6 14 9
//
// Insert 1:
//
// 1 10 7 6 14 9
//
// Round 2:
// val = 7
//
// Compare with 10
//
// Shift:
// 1 10 10 6 14 9
//
// Insert 7:
//
// 1 7 10 6 14 9
//
// Aise hi poora array sort ho jayega.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{
        10,1,7,6,14,9
    };

    int n = arr.size();

    // Insertion Sort

    // Round 1 se start karenge
    // Kyuki index 0 ko compare karne ke liye
    // uske left me koi element nahi hai
    for(int round = 1; round < n; round++){

        // Step 1:
        // Current element ko store kar lo
        int val = arr[round];

        // Current element ke left se compare karenge
        int j = round - 1;

        // Step 2:
        // Jab tak left wala element bada hai
        // usko ek step right shift karte jao
        for(; j >= 0; j--){

            // Agar left element bada hai
            if(arr[j] > val){

                // Shift right
                arr[j + 1] = arr[j];
            }

            else{

                // Correct position mil gayi
                // aur compare karne ki zarurat nahi
                break;
            }
        }

        // Step 3:
        // Correct position par value insert kar do
        arr[j + 1] = val;
    }

    // Sorted array print
    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}