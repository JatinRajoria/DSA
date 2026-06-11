// Reverse Vowels of a String (Leetcode 345)

// Approach: Two Pointers
// T.C -> 0(n)
// S.C -> 0(1)
//
// Idea:
// 1. Ek pointer starting (low) se chalega.
// 2. Ek pointer ending (high) se chalega.
// 3. Agar dono vowels hain, toh unhe swap kar do.
// 4. Agar low vowel nahi hai, toh low++.
// 5. Warna high vowel nahi hoga, toh high--.
//
// Time Complexity: O(N)
// Space Complexity: O(1)

/*
Example 1:

Input:
s = "hello"

Initially:
h e l l o
L         H

Step 1:
h -> vowel nahi hai
L++

e vowel hai, o vowel hai
swap(e, o)

h o l l e
    L   H

Answer:
"holle"

-------------------------------------------------

Example 2:

Input:
s = "IceCreAm"

Vowels:
I, e, e, A

Reverse order:
A, e, e, I

Output:
"AceCreIm"

-------------------------------------------------

Example 3:

Input:
s = "leetcode"

Vowels:
e, e, o, e

Reverse:
e, o, e, e

Output:
"leotcede"
*/

#include <iostream>
#include <string>
using namespace std;

// Function to check whether a character is vowel or not
bool isvowel(char ch) {

    // Convert uppercase letters into lowercase
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}


// Function to reverse only vowels
string reverseVowels(string s) {

    int low = 0;
    int high = s.size() - 1;

    while(low < high) {

        // Dono vowels hain
        if(isvowel(s[low]) && isvowel(s[high])) {

            swap(s[low], s[high]);

            low++;
            high--;
        }

        // == 0 mtlb vowel nhi hai toh isme jao (upar func me return true hoga toh vowel hai aur false hoga toh 0 mtlb isme ana hai)
        // Left character vowel nahi hai
        else if(isvowel(s[low]) == 0) {

            low++;
        }

        // Right character vowel nahi hai
        else {

            high--;
        }
    }

    return s;
}


int main() {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Original String: " << s << endl;

    string ans = reverseVowels(s);

    cout << "After Reversing Vowels: "<< ans << endl;

    return 0;
}