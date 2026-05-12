// Set the kth bit

// 1. One Way
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     int n, k;

//     cout << "Enter the number: ";
//     cin >> n;

//     cout << "Enter the kth bit position: ";
//     cin >> k;

//     int temp = n;

//     vector<int> bin;

//     while(temp > 0) {
//         bin.push_back(temp % 2);
//         temp /= 2;
//     }

//     // Agar k vector size se bada ho toh extra 0 add kro
//     while(bin.size() <= k) {
//         bin.push_back(0);
//     }

//     // kth bit set
//     bin[k] = 1;

//     int ans = 0;

//     for(int i = 0; i < bin.size(); i++) {
//         ans += bin[i] * (1 << i);
//     }

//     cout << "Answer: " << ans;

//     return 0;
// }



// 2. Another way
#include<iostream>
using namespace std;

int setKthBit(int n, int k) {
    int mask = 1<<k;
    int val = n | mask;
    return val;
}

int main() {

    int n, k;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the kth bit position: ";
    cin >> k;

    int ans = setKthBit(n, k);

    cout << "Answer: " << ans;

    return 0;
}