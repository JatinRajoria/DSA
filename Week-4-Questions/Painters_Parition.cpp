// Painters Partion Problem 

// Goal:
// Minimum possible maximum time find karna hai

// Conditions:
// 1. Har painter ko continuous boards milengi
// 2. Har board sirf ek painter paint karega
// 3. Maximum time minimum hona chahiye

// Example:

// Boards:
// 5 10 30 20 15

// Painters = 3

// Possible Allocation:

// Painter 1 -> 5 10
// Painter 2 -> 30
// Painter 3 -> 20 15

// Time:
// Painter 1 = 15
// Painter 2 = 30
// Painter 3 = 35

// Maximum time = 35

// Hume minimum maximum time chahiye

// Binary Search on Answer

#include <iostream>
#include <vector>
using namespace std;

// Check function
// Kya given mid time ke andar
// painting possible hai?
bool isPossibleSolution(vector<int>& arr, int n, int k, int mid){

    // Initially 1 painter
    int painterCount = 1;

    // Current painter ka total time
    int timeSum = 0;

    // Sare boards traverse krenge
    for(int i = 0; i < n; i++){

        // Agar single board hi
        // mid se bada hai
        // toh impossible
        if(arr[i] > mid){

            return false;
        }

        // Agar current board add krne pr
        // limit exceed ho rhi hai
        if(arr[i] + timeSum > mid){

            // New painter
            painterCount++;

            // Current board new painter ko de di
            timeSum = arr[i];

            // Agar painters limit se
            // zyada ho gaye
            if(painterCount > k){

                return false;
            }
        }

        else{

            // Current painter ko
            // current board de di
            timeSum += arr[i];
        }
    }

    // Allocation possible
    return true;
}

int main(){

    // Boards length
    vector<int> arr{5,10,30,20,15};

    // Total boards
    int n = arr.size();

    // Total painters
    int k = 3;

    // Search space start
    //
    // Minimum possible answer
    int start = 0;

    // Search space end
    //
    // Maximum possible answer
    // total sum ho sakta hai
    int end = 0;

    // Total sum calculate
    for(int i = 0; i < n; i++){
        end += arr[i];
    }

    // Final answer
    int ans = -1;

    // Binary Search on Answer
    while(start <= end){

        // Mid calculate
        int mid =
        start + (end - start)/2;

        // Check possible hai ya nahi
        if(isPossibleSolution(arr,n,k,mid)){

            // Answer store
            ans = mid;

            // Aur minimum answer dhoondenge
            // isliye left search
            end = mid - 1;
        }

        else{

            // Possible nahi hai
            // answer bada chahiye
            start = mid + 1;
        }
    }

    cout << "Minimum Time: "
         << ans << endl;

    return 0;
}