// Exponentiation (Power Calculation)
//
// Algorithm Used:
// Slow Exponentiation
//
// Purpose:
// a^b calculate karna
//
// Example:
//
// a = 5
// b = 4
//
// 5^4 = 5 × 5 × 5 × 5
//     = 625

#include <iostream>
using namespace std;

int slowExponentiation(int a, int b){

    // Answer ko 1 se initialize karte hain
    // kyuki multiplication ka identity element 1 hota hai
    int ans = 1;

    // b baar loop chalega
    for(int i = 0; i < b; i++){

        // Har baar answer ko a se multiply kar do
        ans *= a;
    }

    // Final answer return
    return ans;
}

int main(){

    cout << slowExponentiation(5, 4) << endl;

    return 0;
}