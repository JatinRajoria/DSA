// GCD of two numbers (GFG)
// GCD (Greatest Common Divisor)
//
// Algorithm Used:
// Euclid Algorithm (Subtraction Method)
//
// GCD = Sabse badi number jo dono numbers ko
// completely divide kar sake.
//
// Example:
//
// a = 24
// b = 18
//
// Factors of 24:
// 1 2 3 4 6 8 12 24
//
// Factors of 18:
// 1 2 3 6 9 18
//
// Common Factors:
// 1 2 3 6
//
// Greatest Common Factor:
// 6

#include<iostream>
using namespace std;

int gcd(int a, int b){

    // Agar a = 0 hai
    // toh answer b hoga
    if(a == 0)
        return b;

    // Agar b = 0 hai
    // toh answer a hoga
    if(b == 0)
        return a;

    // Jab tak dono positive hain
    while(a > 0 && b > 0){

        // Bade number me se
        // chhota number subtract karo
        if(a > b){

            a = a - b;
        }

        else{

            b = b - a;
        }
    }

    // Jis variable me value bachi hai
    // wahi GCD hai
    return a == 0 ? b : a;
}

int main(){

    int a = 24;
    int b = 18;

    int ans = gcd(a, b);

    cout << "GCD is: "
         << ans << endl;

    return 0;
}
