// Fast Exponentiation
//
// Algorithm Used:
// Binary Exponentiation / Fast Exponentiation
//
// Purpose:
// a^b calculate karna efficiently
//
// Example:
//
// a = 5
// b = 4
//
// 5^4 = 625
//
// Slow Exponentiation:
// O(b)
//
// Fast Exponentiation:
// O(log b)

#include <iostream>
using namespace std;

int fastExponentiation(int a, int b){

    // Final answer
    int ans = 1;

    // Jab tak power 0 na ho jaye
    while(b > 0){

        // Agar current bit odd hai
        // matlab b ka LSB 1 hai
        if(b & 1){

            // Answer me current a multiply kar do
            ans = ans * a;
        }

        // Base ko square kar do
        a = a * a;

        // Power ko right shift kar do
        // b = b / 2
        b >>= 1;
    }

    return ans;
}

int main(){

    cout << fastExponentiation(5, 4) << endl;

    return 0;
}