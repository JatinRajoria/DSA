// Q. Add 2 numbers represented by 2 arrays
// a = 9 5 4 9
// b = 2 1 4
// 9 + 4 = 13 Digit: 3, Carry:1, Answer: "3"
// aur jya element kam hai vha 0 le lenge
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    // First number
    vector<int> a{9,5,4,9};

    // Second number
    vector<int> b{2,1,4};

    // Sizes
    int n = a.size();
    int m = b.size();

    // Answer string
    string ans = "";

    // Carry initially 0
    int carry = 0;

    // Last index se start krenge
    int i = n - 1;
    int j = m - 1;

    // Jab tak dono arrays me elements hai
    while(i >= 0 && j >= 0){

        // Dono digits + carry add kr rhe hai
        int x = a[i] + b[j] + carry;

        // Last digit nikal lo
        int digit = x % 10;

        // String me character ke form me push krenge
        ans.push_back(digit + '0');

        // Carry update
        carry = x / 10;

        // Piche move kro
        i--;
        j--;
    }

    // Agar first array me elements bache ho
    while(i >= 0){

        int x = a[i] + carry;

        int digit = x % 10;

        ans.push_back(digit + '0');

        carry = x / 10;

        i--;
    }

    // Agar second array me elements bache ho
    while(j >= 0){

        int x = b[j] + carry;

        int digit = x % 10;

        ans.push_back(digit + '0');

        carry = x / 10;

        j--;
    }

    // Agar end me carry bach jaye
    if(carry){

        ans.push_back(carry + '0');
    }

    // Reverse isliye krenge kyuki
    // humne answer ulta store kiya hai
    reverse(ans.begin(), ans.end());

    cout << "Answer is: " << ans << endl;

    return 0;
}