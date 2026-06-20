/*
Integer to Roman (LeetCode 12)

Example:
Input:
58

Output:
LVIII

Explanation:

50 -> L
5  -> V
3  -> III

Answer:
LVIII

Approach:

Largest Roman value se start karenge.
Jab tak current value number me fit ho rahi hai,
use answer me add karenge aur number se subtract karenge.

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

string intToRoman(int num) {

    // Roman symbols descending order me
    string romanSymbols[] = {"M", "CM", "D", "CD","C", "XC", "L", "XL","X", "IX", "V", "IV", "I"
    };

    // Corresponding values
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    string ans = "";

    // Har value ko check karo
    for(int i = 0; i < 13; i++) {
        /*
        Example:
        num = 58
        58 >= 50
        ans = "L"
        num = 8
        */
        while(num >= values[i]) {
            // Symbol answer me add karo
            ans += romanSymbols[i];
            // Value subtract karo
            num -= values[i];
        }
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // Direct function call
    cout << "Roman Numeral: "<< intToRoman(num)<< endl;

    return 0;
}