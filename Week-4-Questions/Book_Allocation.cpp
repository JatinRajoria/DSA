// Book Allocation Problem
//
// Goal:
// Minimum possible maximum pages allocate krni hai
//
// Conditions:
// 1. Har student ko atleast 1 book mile
// 2. Books continuous honi chahiye
// 3. Maximum pages minimum hone chahiye
//
// Example:
//
// Books:
// 12 34 67 90
//
// Students = 2
//
// Possible allocations:
//
// Student 1 -> 12 34 67
// Student 2 -> 90
//
// Maximum pages = 113
//
// Aur agar:
//
// Student 1 -> 12 34
// Student 2 -> 67 90
//
// Maximum pages = 157
//
// Hume minimum maximum chahiye
// Toh answer = 113

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// Check function
// Kya given mid pages ke andar
// allocation possible hai?
bool search(vector<int>& a,
            int n,
            int m,
            int mid){

    // Initially 1 student already hai
    int studentCount = 1;

    // Current student ka pages sum
    int pageSum = 0;

    // Sare books traverse krenge
    for(int i = 0; i < n; i++){

        // Agar single book hi
        // mid se badi hai
        // toh impossible
        //
        // Example:
        // Book = 90
        // mid = 50
        //
        // Ek student ko atleast
        // 90 pages leni hi padengi
        if(a[i] > mid){

            return false;
        }

        // Agar current book add krne pr
        // limit cross ho rhi hai
        //
        // Example:
        // pageSum = 46
        // current book = 67
        //
        // 46 + 67 > mid
        //
        // Toh new student lena padega
        if(pageSum + a[i] > mid){

            // New student
            studentCount++;

            // Current book new student ko de di
            pageSum = a[i];

            // Agar students allowed limit se
            // zyada ho gaye
            if(studentCount > m){

                return false;
            }
        }

        else{

            // Current student ko
            // current book de di
            pageSum += a[i];
        }
    }

    // Allocation possible
    return true;
}

int main() {

    // Books pages
    vector<int> a{
        12,34,67,90
    };

    // Total books
    int n = 4;

    // Total students
    int m = 2;

    // Agar students books se zyada hai
    //
    // Example:
    // Books = 4
    // Students = 5
    //
    // Har student ko atleast
    // 1 book deni hai
    //
    // Impossible case
    if(m > n){

        cout << "No Calculations";

        return 0;
    }

    // Search space start
    //
    // Minimum possible answer
    int s = 0;

    // Search space end
    //
    // Maximum possible answer
    //
    // Matlab ek hi student
    // sari books le le
    int e =
    accumulate(a.begin(),
               a.end(),
               0);

    // Final answer
    int ans = -1;

    // Binary Search on Answer
    while(s <= e){

        // Mid pages
        int mid =
        s + (e-s)/2;

        // Check possible hai ya nahi
        if(search(a,
                  n,
                  m,
                  mid)){

            // Answer store
            ans = mid;

            // Aur minimum answer dhoondenge
            // isliye left search
            e = mid - 1;
        }

        else{

            // Possible nahi hai
            // pages badhao
            s = mid + 1;
        }
    }

    cout << "Minimum pages: "
         << ans;

    return 0;
}