// Find the Last Occurance of an element


// 1. One Way

// #include <iostream>
// #include <vector>
// using namespace std;

// int lastOcc(vector<int> arr, int target){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid]==target){
//             // ans store
//             ans = mid;
//             // last occurence ke liye left me jao
//             start = mid + 1;
//         }
//         else if(target<arr[mid]){
//             // left search
//             end = mid - 1;
//         }
//         else if(target>arr[mid]){
//             // right search
//             start = mid  + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int main(){
//     vector <int> arr{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
//     int target = 7;

//     int ans = lastOcc(arr, target);
//     cout<<"Last Occurence is: "<<ans<<endl;
//     return 0;
// }



// 2. Another Way
// Find the Last Occurance of an element using  in-built functions (Upper Bound)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};

    auto answer = upper_bound(arr.begin(), arr.end(), 7);

    // arr.begin() index bta rha hai
    cout << "Answer is : "<< answer - arr.begin();

    return 0;
}