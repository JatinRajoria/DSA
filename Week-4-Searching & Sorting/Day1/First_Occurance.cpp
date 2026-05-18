// Find the First Occurance of an element

// 1. One Way

// #include <iostream>
// #include <vector>
// using namespace std;

// int firstOcc(vector<int> arr, int target){

//     int start = 0;
//     int end = arr.size() - 1;

//     int ans = -1;

//     while(start <= end){

//         int mid = start + (end - start) / 2;

//         if(arr[mid] == target){

//             ans = mid;

//             // First occurrence ke liye left me jao
//             end = mid - 1;
//         }

//         else if(target < arr[mid]){

//             // Left search
//             end = mid - 1;
//         }

//         else{

//             // Right search
//             start = mid + 1;
//         }
//     }

//     return ans;
// }

// int main(){

//     vector<int> arr{1,3,3,4,4,4,4,6,7};

//     int target = 4;

//     int answer = firstOcc(arr, target);

//     cout << "Answer is : " << answer << endl;

//     return 0;
// }





// 2. Another Way
// Find the First Occurance of an element using  in-built functions (lower Bound)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr{1,3,3,4,4,4,4,6,7};

    auto answer = lower_bound(arr.begin(), arr.end(), 4);

    // arr.begin() index bta rha hai
    cout << "Answer is : "<< answer - arr.begin();

    return 0;
}