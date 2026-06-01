// Aggressive Cows Problem
//
// Goal:
// Cows ko stalls me aise place karna hai
// ki minimum distance maximum ho
//
// Example:
//
// Stalls:
// 1 2 4 8 9
//
// Cows = 3
//
// Placement:
//
// Cow 1 -> 1
// Cow 2 -> 4
// Cow 3 -> 8
//
// Distances:
// 4-1 = 3
// 8-4 = 4
//
// Minimum distance = 3
//
// Aur ye maximum possible hai
//
// Binary Search on Answer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check function
// Kya cows ko atleast
// 'mid' distance pr place kar sakte hai?
bool isPossible(vector<int>& stalls,
                int k,
                int mid){

    // Pehli cow pehle stall pr rakh di
    int cowCount = 1;

    // Last placed cow ki position
    int lastPos = stalls[0];

    // Baaki stalls check krenge
    for(int i = 1; i < stalls.size(); i++){

        // Agar current stall aur
        // last placed cow ke beech
        // distance >= mid hai
        if(stalls[i] - lastPos >= mid){

            // New cow place kar di
            cowCount++;

            // Last position update
            lastPos = stalls[i];

            // Agar sari cows place ho gayi
            if(cowCount == k){

                return true;
            }
        }
    }

    // Agar sari cows place nahi hui
    return false;
}

int main(){

    // Stall positions
    vector<int> stalls{
        1,2,4,8,9
    };

    // Total cows
    int k = 3;

    // Sort karna zaruri hai
    sort(stalls.begin(),
         stalls.end());

    // Minimum possible distance
    int start = 0;

    // Maximum possible distance
    int end =
    stalls[stalls.size()-1]
    - stalls[0];

    // Final answer
    int ans = -1;

    // Binary Search on Answer
    while(start <= end){

        // Mid distance
        int mid =
        start + (end - start)/2;

        // Check possible hai ya nahi
        if(isPossible(stalls,
                      k,
                      mid)){

            // Answer store
            ans = mid;

            // Aur bada distance try krenge
            start = mid + 1;
        }

        else{

            // Distance zyada hai
            // isliye kam kro
            end = mid - 1;
        }
    }

    cout << "Maximum Minimum Distance: "
         << ans;

    return 0;
}