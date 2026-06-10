// count the prime numbers

// 1. One way ( T.C -> 0(n) )

// Count Primes
//
// Question:
// Count how many prime numbers are present
// in the range [0, n)
//
// Example:
//
// n = 10
//
// Numbers:
//
// 0 1 2 3 4 5 6 7 8 9
//
// Prime Numbers:
//
// 2 3 5 7
//
// Count = 4

// #include<iostream>
// using namespace std;

// // Function to check whether a number is prime or not
// bool isPrime(int n){

//     // 0 and 1 are not prime
//     if(n <= 1)
//         return false;

//     // Check divisibility from 2 to n-1
//     for(int i = 2; i < n; i++){

//         // If completely divisible
//         // then not a prime number
//         if(n % i == 0){
//             return false;
//         }
//     }

//     // No factor found
//     return true;
// }

// int countPrimes(int n){

//     int count = 0;

//     // Check every number from 0 to n-1
//     for(int i = 0; i < n; i++){

//         if(isPrime(i)){
//             count++;
//         }
//     }

//     return count;
// }

// int main(){

//     int n;

//     cout << "Enter n: ";
//     cin >> n;

//     int ans = countPrimes(n);

//     cout << "Total Prime Numbers: "
//          << ans << endl;

//     return 0;
// }



// 2. Another way

// LeetCode 204 - Count Primes
//
// Algorithm Used:
// Sieve of Eratosthenes
//
// Idea:
// Har number ko prime maan lo.
// Fir prime numbers ke multiples ko non-prime mark kar do.
//
// Example:
//
// n = 10
//
// Numbers:
// 0 1 2 3 4 5 6 7 8 9
//
// Prime Numbers:
// 2 3 5 7
//
// Answer:
// 4

#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n){

    // Sabhi numbers ko initially prime maan lo
    vector<bool> prime(n, true);

    // 0 aur 1 prime nahi hote
    if(n > 0)
        prime[0] = false;

    if(n > 1)
        prime[1] = false;

    // Sieve of Eratosthenes
    for(int i = 2; i * i < n; i++){

        // Agar current number prime hai
        if(prime[i]){

            // Iske multiples ko non-prime mark karo
            //
            // i*i se start karte hain
            // kyuki usse chhote multiples pehle hi mark ho chuke hote hain
            for(int j = i * i; j < n; j += i){

                prime[j] = false;
            }
        }
    }

    // Prime numbers count karenge
    int count = 0;

    for(int i = 2; i < n; i++){

        if(prime[i]){

            count++;
        }
    }

    return count;
}

int main(){

    int n;

    cout << "Enter n: ";
    cin >> n;

    int ans = countPrimes(n);

    cout << "Total Prime Numbers: "
         << ans << endl;

    return 0;
}