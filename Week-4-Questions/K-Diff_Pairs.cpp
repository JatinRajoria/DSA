// Q. K-Diff Pairs in an Array
// Difference between 2 elements should be equal to k



// 1. One way (brute for O(n) aur isme distinct pairs nhi hai mtlb 1, 1 do baar hai toh vo do baar hi include krega)
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;

// int main(){

//     // Array
//     vector<int> arr{3,1,4,1,5};

//     // Difference required
//     int k = 2;

//     // Count of pairs
//     int count = 0;

//     int n = arr.size();

//     // Har element ko baki elements ke sath compare krenge
//     for(int i = 0; i < n; i++){

//         // i+1 isliye
//         // kyuki same pair dobara check nahi krna
//         for(int j = i + 1; j < n; j++){

//             // Difference nikal rhe hai
//             // abs use kiya kyuki positive difference chiye
//             int diff = abs(arr[i] - arr[j]);

//             // Agar difference k ke equal hua
//             if(diff == k){

//                 // Pair mil gaya
//                 count++;

//                 cout << "("<< arr[i]<< ", "<< arr[j]<< ")"<< endl;
//             }
//         }
//     }

//     cout << "Total pairs are: "<< count<< endl;

//     return 0;
// }



// 2. Another way (using two pointer approach and using set for distinct pairs)
// Distinct pairs find krne hai

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// int findPairs(vector<int>& nums, int k) {

//     // Sorting isliye kr rhe hai
//     // taki 2 pointer approach use kr sake
//     sort(nums.begin(), nums.end());

//     // Distinct pairs store krne ke liye
//     // set duplicate pairs allow nahi karta
//     set<pair<int,int>> ans;

//     // 2 pointers
//     int i = 0;
//     int j = 1;

//     // Jab tak j array ke andar hai
//     while(j < nums.size()) {

//         // Difference nikal rhe hai
//         int diff = nums[j] - nums[i];

//         // Agar difference k ke equal hai
//         if(diff == k) {

//             // Pair insert kr do
//             ans.insert({nums[i], nums[j]});

//             // Dono pointers aage badhao
//             i++;
//             j++;
//         }

//         // Agar difference bada hai
//         // toh chhota difference lane ke liye
//         // i ko aage badhayenge
//         else if(diff > k) {

//             i++;
//         }

//         // Agar difference chhota hai
//         // toh j ko aage badhayenge
//         else {

//             j++;
//         }

//         // Dono pointers same nahi hone chahiye
//         // warna same element compare hoga
//         if(i == j) {

//             j++;
//         }
//     }

//     // Distinct pairs ki count return krenge
//     return ans.size();
// }

// int main() {

//     vector<int> nums{3,1,4,1,5};

//     int k = 2;

//     int ans = findPairs(nums, k);

//     cout << "Total distinct pairs are: "<< ans<< endl;

//     return 0;
// }



// 3. Another way (using binary search approach and using set for distinct pairs)
// Q. K-Diff Pairs in an Array
// Binary Search Approach

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Binary Search Function
int binarySearch(vector<int> &nums, int start, int x){

    // Last index
    int end = nums.size() - 1;

    // Jab tak search space valid hai
    while(start <= end){

        // Mid nikal rhe hai
        int mid = start + (end - start) / 2;

        // Agar element mil gaya
        if(nums[mid] == x){

            return mid;
        }

        // Agar x bada hai
        // toh right side search krenge
        else if(x > nums[mid]){

            start = mid + 1;
        }

        // Agar x chhota hai
        // toh left side search krenge
        else{

            end = mid - 1;
        }
    }

    // Agar element nahi mila
    return -1;
}

int findPairs(vector<int>& nums, int k){

    // Sorting isliye kr rhe hai
    // taki Binary Search use kr sake
    sort(nums.begin(), nums.end());

    // Distinct pairs store krne ke liye
    set<pair<int,int>> ans;

    // Har element ke liye check krenge
    for(int i = 0; i < nums.size(); i++){

        // Hume nums[i] + k find krna hai
        int target = nums[i] + k;

        // Binary Search laga rhe hai
        // i+1 se search krenge
        // taki same element dobara use na ho
        if(binarySearch(nums, i + 1, target) != -1){

            // Pair insert kr do
            ans.insert({nums[i], target});
        }
    }

    // Distinct pairs ki count return krenge
    return ans.size();
}

int main(){

    vector<int> nums{3,1,4,1,5};

    int k = 2;

    int ans = findPairs(nums, k);

    cout << "Total distinct pairs are: "<< ans<< endl;

    return 0;
}