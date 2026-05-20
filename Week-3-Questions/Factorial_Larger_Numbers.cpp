//Q. Factorials of large numbers
// Large Factorial Problem
// Factorial ko vector me digit by digit store krenge

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int n) {

    // Initially 1 store krenge
    // kyuki 0! = 1 aur 1! = 1
    vector<int> ans;

    ans.push_back(1);

    // 2 se n tak multiply krenge
    for(int i = 2; i <= n; i++) {

        // Har multiplication ke liye carry reset hoga
        int carry = 0;

        // Vector ki har digit pr multiplication
        for(int j = 0; j < ans.size(); j++) {

            // Current digit * current number + carry
            int x = ans[j] * i + carry;

            // Last digit store krenge
            ans[j] = x % 10;

            // Remaining carry save krenge
            carry = x / 10;
        }

        // Agar carry bach jaye
        while(carry) {

            // Carry ki last digit push krenge
            ans.push_back(carry % 10);

            // Carry ko chhota krenge
            carry /= 10;
        }
    }

    // Digits ulte stored hai
    // isliye reverse krenge
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    int n;

    cout << "Enter a number: ";

    cin >> n;

    // Function call
    vector<int> ans = factorial(n);

    cout << "Factorial is: ";

    // Vector print
    for(int i = 0; i < ans.size(); i++) {

        cout << ans[i];
    }

    return 0;
}