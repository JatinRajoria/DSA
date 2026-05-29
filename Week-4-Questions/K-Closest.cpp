//Q. find K-Closest Element

// 1. One way 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// vector<int> findClosestElements(vector<int>& arr,
//                                 int k,
//                                 int x) {

//     // Ye index closest element ke around jayega
//     int a = 0;

//     // Initially first element ka diff
//     int ans = abs(arr[0] - x);

//     vector<int> v;

//     // Closest element find karne ki try
//     for(int i = 1; i < arr.size(); i++) {

//         // Current element ka diff
//         int diff = abs(arr[i] - x);

//         // Agar current diff chota ya equal hai
//         // toh isko better answer maan lo
//         if(diff <= ans) {

//             ans = diff;

//             // Closest index update
//             a++;
//         }

//         // Jaise hi diff badhne lage
//         // break kar do
//         else {

//             break;
//         }
//     }

//     // Left pointer
//     int j = a - 1;

//     // Right pointer
//     int r = a;

//     // Jab tak k elements nahi mil jate
//     while(k > 0) {

//         // Agar left side khatam ho gayi
//         // toh sirf right se lo
//         if(j < 0 && r < arr.size()) {

//             v.push_back(arr[r]);

//             r++;

//             k--;

//             continue;
//         }

//         // Agar right side khatam ho gayi
//         // toh sirf left se lo
//         else if(j >= 0 && r >= arr.size()) {

//             v.push_back(arr[j]);

//             j--;

//             k--;

//             continue;
//         }

//         // Right element ka diff
//         int rightDif = abs(arr[r] - x);

//         // Left element ka diff
//         int leftDif = abs(arr[j] - x);

//         // Agar right wala closer hai
//         if(rightDif < leftDif) {

//             v.push_back(arr[r]);

//             r++;

//             k--;
//         }

//         // Agar left wala closer hai
//         else if(rightDif > leftDif) {

//             v.push_back(arr[j]);

//             j--;

//             k--;
//         }

//         // Agar dono equal hai
//         // toh smaller element lo
//         else {

//             v.push_back(arr[j]);

//             j--;

//             k--;
//         }
//     }

//     // Final answer sorted form me chahiye
//     sort(v.begin(), v.end());

//     return v;
// }

// int main() {

//     vector<int> arr{
//         1,2,3,4,5
//     };

//     int k = 4;

//     int x = 3;

//     vector<int> ans =
//     findClosestElements(arr, k, x);

//     cout << "Closest Elements: ";

//     for(int i = 0; i < ans.size(); i++) {

//         cout << ans[i] << " ";
//     }

//     return 0;
// }



// 2. Another Way (using two pointer)

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:

//     // Two Pointer Method
//     // Ye function k closest elements return karega
//     vector<int> twoPtrMethod(vector<int> &arr,
//                              int k,
//                              int x){

//         // Left pointer
//         int low = 0;

//         // Right pointer
//         int high = arr.size() - 1;

//         // Jab tak window size k se badi hai
//         // tab tak extra elements remove krenge
//         while(high - low >= k){

//             // Left element ka difference
//             int leftDiff = x - arr[low];

//             // Right element ka difference
//             int rightDiff = arr[high] - x;

//             // Agar left element zyada door hai
//             // toh usko hata do
//             if(leftDiff > rightDiff){

//                 low++;
//             }

//             // Warna right element hata do
//             else{

//                 high--;
//             }
//         }

//         // Final answer store karne ke liye
//         vector<int> ans;

//         // Remaining window me hi
//         // k closest elements bachenge
//         for(int i = low; i <= high; i++){

//             ans.push_back(arr[i]);
//         }

//         return ans;
//     }

//     // Main function
//     vector<int> findClosestElements(vector<int>& arr,
//                                     int k,
//                                     int x) {

//         return twoPtrMethod(arr, k, x);
//     }
// };

// int main() {

//     Solution obj;

//     // Sorted array
//     vector<int> arr{
//         1,2,3,4,5
//     };

//     // Kitne closest elements chahiye
//     int k = 4;

//     // Kis value ke closest chahiye
//     int x = 3;

//     // Function call
//     vector<int> ans =
//     obj.findClosestElements(arr, k, x);

//     // Answer print
//     cout << "Closest Elements: ";

//     for(int i = 0; i < ans.size(); i++){

//         cout << ans[i] << " ";
//     }

//     return 0;
// }



// 3. Another way (sabse closet element nikal ke window ka size bda kr dena)
//  h-> index closet element 
//  l-> h-1;

#include <iostream>
#include <vector>
using namespace std;

// Lower Bound Function
// Ye first element ka index return karega
// jo x ke greater ya equal ho
int lowerBound(vector<int> &arr, int x){

    // Starting index
    int start = 0;

    // Ending index
    int end = arr.size() - 1;

    // Default answer
    int ans = end;

    // Binary Search
    while(start <= end){

        // Mid calculate
        int mid =
        start + (end - start)/2;

        // Agar mid element
        // x se bada ya equal hai
        if(arr[mid] >= x){

            // Possible answer store
            ans = mid;

            // Aur chota index dhoondo
            end = mid - 1;
        }

        // Agar x bada hai
        // toh right search
        else if(x > arr[mid]){
            start = mid + 1;
        }

        // Left search
        else{
            end = mid - 1;
        }
    }

    return ans;
}

// Binary Search + Two Pointer Method
vector<int> bs_method(vector<int> &arr,int k,int x){

    // Lower bound index
    int high =
    lowerBound(arr, x);

    // Left pointer
    int low = high - 1;

    // Jab tak k elements choose nahi hote
    while(k--){

        // Agar left side khatam ho gayi
        if(low < 0){
            high++;
        }

        // Agar right side khatam ho gayi
        else if(high >= arr.size()){
            low--;
        }

        // Agar left element zyada door hai
        // toh right element choose karo
        else if(x - arr[low] > arr[high] - x){
            high++;
        }

        // Warna left element choose karo
        else{
            low--;
        }
    }

    // Final closest elements return
    return vector<int>(arr.begin() + low + 1,arr.begin() + high);
}

// Main function
vector<int> findClosestElements(vector<int>& arr,int k,int x){return bs_method(arr, k, x);}

int main(){
    // Sorted array
    vector<int> arr{1,2,3,4,5};

    // Number of closest elements
    int k = 4;

    // Target element
    int x = 3;

    // Function call
    vector<int> ans = findClosestElements(arr,k,x);
    // Answer print
    cout << "Closest Elements: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
