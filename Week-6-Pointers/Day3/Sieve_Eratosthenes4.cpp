// Sieve of Eratosthenes
#include <iostream>
#include <vector>

using namespace std;


// Function to generate prime numbers using Sieve of Eratosthenes
vector<bool> Sieve(int n){

    // Initially assume all numbers are prime
    vector<bool> sieve(n + 1, true);

    // 0 and 1 are not prime
    sieve[0] = false;
    sieve[1] = false;

    // Check every number from 2 to n
    for(int i = 2; i <= n; i++){
        // If current number is prime
        if(sieve[i] == true){
            // Mark all multiples of i as non-prime
            int j = i * 2;
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Get prime information
    vector<bool> sieve = Sieve(n);

    cout << "Prime numbers from 1 to "<< n << " are: ";
    for(int i = 0; i <= n; i++){
        if(sieve[i]){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}