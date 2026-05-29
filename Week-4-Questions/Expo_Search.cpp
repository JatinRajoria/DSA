// // Exponential Search / doubling Search / Galloping Search / Starvik Search
// // Pehle exponentially range find krenge
// // Fir us range me Binary Search lagayenge
// It applied on sorted array

// 1. one way 
// Array me pehle exponentially range find krenge
// jisme target present ho sakta hai
// Fir us range pr Binary Search laga denge

// Example:
// 3 4 5 6 11 13 14 15 16 70
//
// Agar target = 13
//
// Pehle range find hogi:
// 3 -> 4 -> 11 -> 16
//
// Toh target 13
// 11 aur 16 ke beech me hoga
//
// Fir us part pr Binary Search chalegi

// #include<iostream>
// using namespace std;

// // Binary Search Function
// int bs(int a[],
//        int start,
//        int end,
//        int x){

//     // Jab tak valid range hai
//     while(start <= end){

//         // Mid calculate
//         int mid =
//         (start + end)/2;

//         // Agar target mil gaya
//         if(a[mid] == x){

//             return mid;
//         }

//         // Agar target bada hai
//         // toh right search
//         else if(x > a[mid]){

//             start = mid + 1;
//         }

//         // Warna left search
//         else{

//             end = mid - 1;
//         }
//     }

//     // Agar element nahi mila
//     return -1;
// }

// // Exponential Search Function
// int expSearch(int a[],
//               int n,
//               int x){

//     // Agar first element hi target hai
//     // toh directly return
//     if(a[0] == x){

//         return 0;
//     }

//     // Starting index
//     int i = 1;

//     // Exponentially range badha rhe hai
//     // i = 1 -> 2 -> 4 -> 8 -> ...
//     while(i < n &&
//           a[i] <= x){

//         i = i * 2;
//     }

//     // Ab target definitely
//     // i/2 aur min(i,n-1)
//     // ke beech me hoga

//     return bs(a,
//               i/2,
//               min(i, n-1),
//               x);
// }

// int main(){

//     int a[] = {
//         3,4,5,6,11,13,14,15,16,70
//     };

//     // Total elements
//     int n =
//     sizeof(a)/sizeof(int);

//     // Target element
//     int x = 13;

//     // Function call
//     int ans =
//     expSearch(a, n, x);

//     // Answer print
//     cout << ans << endl;

//     return 0;
// }




// 2. Unbounded Search 
// find the element in an infinite search (sorted array) (essa array jiska koi anth na ho usme dhundna)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Binary Search Function
// Ye function given range me
// target element search karega
int binSearch(vector<int> v,
              int s,
              int e,
              int tar){

    // Jab tak valid search space hai
    while(s <= e){

        // Mid calculate
        int m =
        s + (e - s)/2;

        // Agar target mil gaya
        if(v[m] == tar){

            return m;
        }

        // Agar target bada hai
        // toh right search
        else if(v[m] < tar){

            s = m + 1;
        }

        // Warna left search
        else{

            e = m - 1;
        }
    }

    // Agar target nahi mila
    return -1;
}

// Exponential Search Function
int exponenSearch(vector<int> v,
                  int tar){

    // Last valid index
    int n = v.size() - 1;

    // Starting range
    int i = 0;

    // Starting se next index
    int j = 1;

    // Exponentially range badha rhe hai
    // j = 1 -> 2 -> 4 -> 8 ...
    while(j <= n){

        // Agar current element
        // target se bada ya equal hai
        // toh target isi range me hoga
        if(v[j] >= tar){

            break;
        }

        // Previous range end store
        i = j;

        // Range double kar do
        j = j * 2;
    }

    // Ab Binary Search sirf
    // selected range pr chalegi

    int ans =
    binSearch(v,
              i,
              min(j, n),
              tar);

    return ans;
}

int main() {

    cout << "Hello world!" << endl;

    // Sorted array
    vector<int> v{
        3,4,5,6,11,13,14,15,56,70
    };

    cout << "Enter the no. that you want to find in array"
         << endl;

    int tar;

    cin >> tar;

    // Exponential Search call
    int ans =
    exponenSearch(v,
                  tar);

    // Ternary operator
    // Agar ans >= 0 hai
    // toh element mil gaya
    ans >= 0 ?

    cout << "found at index "
         << ans:
    cout << "Not found"
         << endl;

    return 0;
}