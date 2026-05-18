//1. Find the duplcate number in an array using sort 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int findDuplicate(vector<int>& nums) {

//     // Sort the array
//     sort(nums.begin(), nums.end());

//     // Adjacent elements check karo
//     for(int i = 0; i < nums.size() - 1; i++) {

//         if(nums[i] == nums[i + 1]) {
//             return nums[i];
//         }
//     }

//     return -1;
// }

// int main() {

//     vector<int> nums{1,3,4,2,2};

//     int ans = findDuplicate(nums);

//     cout << "Duplicate number is: "
//          << ans << endl;

//     return 0;
// }



//2. Find the duplcate number in an array using negative flagging

// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;

// int findDuplicate(vector<int>& nums) {

//     int ans = -1;

//     for(int i = 0; i < nums.size(); i++) {

//         int index = abs(nums[i]);

//         // Already visited
//         if(nums[index] < 0) {

//             ans = index;

//             return ans;
//         }

//         // Mark visited
//         nums[index] *= -1;
//     }

//     return ans;
// }

// int main() {

//     vector<int> nums{1,3,4,2,2};

//     int ans = findDuplicate(nums);

//     cout << "Duplicate number is: "
//          << ans << endl;

//     return 0;
// }



// 3. Find the duplcate number in an array using Position method
#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {

    while(nums[0] != nums[nums[0]]) {

        swap(nums[0], nums[nums[0]]);
    }

    return nums[0];
}

int main() {

    vector<int> nums{1,3,4,2,2};

    int ans = findDuplicate(nums);

    cout << "Duplicate number is: "
         << ans << endl;

    return 0;
}