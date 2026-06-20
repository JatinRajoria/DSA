// String to Integer (Leetcode 8)
/*
LeetCode 8 - String to Integer (atoi)

Example 1:
Input:
s = "42"

Output:
42

Example 2:
Input:
s = "   -42"

Step 1: Skip spaces

   -42
   ^
   i = 3

Step 2: Found '-'
sign = -1

Step 3: Read digits

num = 4
num = 42

Answer:
42 * (-1)

Output:
-42

Example 3:
Input:
s = "4193 with words"

Read digits:
4 -> 41 -> 419 -> 4193

Next character = ' '
Stop

Output:
4193

Example 4:
Input:
s = "91283472332"

Number exceeds INT_MAX

Output:
2147483647 (INT_MAX)

Approach:
1. Skip leading spaces.
2. Check sign (+ or -).
3. Read digits one by one.
4. Check overflow before adding digit.
5. Return num * sign.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <climits>
#include <cctype>
using namespace std;

int myAtoi(string s) {

    int num = 0;
    int i = 0;
    int sign = 1;

    // Starting me spaces aa sakte hain. Unhe ignore karna hai kyunki number first non-space character se start hoga.
    while(i < s.size() && s[i] == ' ') {
        i++;
    }

    // Agar '+' ya '-' mila toh sign store kar lo.
    // Baad me answer ko positive ya negative banayenge.
        if(i<s.size() &&( s[i]=='-' || s[i]=='+')){
            if(s[i] == '-'){
            sign = sign * (-1);
            }
            i++;
        }

    // Jab tak digit mil rahe hain tab tak number banao.
    while(i < s.size() && isdigit(s[i])) {

        // Naya digit add karne se pehle check kar lo ki number int range se bahar toh nahi ja raha.
        if(num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')) {
            return sign == -1 ? INT_MIN : INT_MAX;
        }

        /*
        Example:

        num = 41
        current digit = '9'

        num * 10 => 410
        + 9      => 419

        Is tarah character digit ko
        actual number me convert karte hain.
        */
        num = num * 10 + (s[i] - '0');
        i++;
    }

    // Starting me sign alag store kiya tha.
    // Ab final answer par apply kar do.
    return num * sign;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int ans = myAtoi(s);
    cout << "Converted Integer: "<< ans << endl;
    return 0;
}