// SPOJ EKO - Wood Cutting Problem
//
// Trees ki heights di hui hain
// Machine ki maximum height find karni hai
// jisse kam se kam k wood mil jaye
//
// Example:
// Trees = 4 42 40 26 46
// k = 20

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check function
// Kya machine ko mid height pr rakhne se
// kam se kam k wood mil rahi hai?
bool possibleSolu(vector<int> v, int mid, int k){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        // Sirf bade trees cut honge
        if(v[i] >= mid){ sum = sum + v
            sum = sum + (v[i] - mid);
        }
    }

    // Required wood mil gayi
    if(sum >= k){

        return true;
    }

    return false;
}

int main() {

    vector<int> v{
        4,42,40,26,46
    };

    int k = 20;

    // Sort karna zaruri nahi hai
    // Bas maximum element nikalne ke liye kar liya
    sort(v.begin(), v.end());

    // Minimum machine height
    int s = 0;

    // Maximum machine height
    int e = v[v.size()-1]; 

    int ans = -1;

    while(s <= e){

        int mid = s + (e-s)/2;

        // Agar itni height par
        // required wood mil rahi hai
        if(possibleSolu(v, mid, k)){
            ans = mid;
            // Aur badi height try krenge
            s = mid + 1;
        }

        else{

            // Wood kam mil rahi hai
            // Height ghatao
            e = mid - 1;
        }
    }

    cout << "Maximum Saw Height = "<< ans << endl;

    return 0;
}