// Reverse Only Letters (Leetcode 917)
// iski T.C -> 0(n/2) -> (0(n))

//
// Approach: using Two Pointer Approach
//
// Idea:
// - Left pointer (l) starting se chalega.
// - Right pointer (h) ending se chalega.
// - Agar dono characters alphabets hain → swap kar do.
// - Agar left wala alphabet nahi hai → l++.
// - Agar right wala alphabet nahi hai → h--.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
Example:

Input:
s = "a-bC-dEf-ghIj"

Initial:
l = 0 ('a')
h = 11 ('j')

Step 1:
'a' and 'j' are alphabets
Swap

j-bC-dEf-ghIa
 l         h

l++, h--

------------------------------------------------

Step 2:
l = 1 ('-')
'-' is NOT alphabet

l++

------------------------------------------------

Step 3:
l = 2 ('b')
h = 10 ('I')

Both alphabets
Swap

j-I C-dEf-ghba

l++, h--

------------------------------------------------

Continue until l >= h

Final Output:
"j-Ih-gfE-dCba"
*/

#include <iostream>
#include <string>
#include <cctype>   // isalpha() ke liye
using namespace std;

string reverseOnlyLetters(string s) {

    // Left pointer
    int l = 0;

    // Right pointer
    int h = s.size() - 1;

    while(l < h) {

        // Agar dono alphabets hain
        if(isalpha(s[l]) && isalpha(s[h])) {

            // Swap karo
            swap(s[l], s[h]);

            // Dono pointers move karo
            l++;
            h--;
        }

        // Agar left wala alphabet nahi hai
        else if(!isalpha(s[l])) {

            l++;
        }

        // Agar right wala alphabet nahi hai
        else {

            h--;
        }
    }

    return s;
}

int main() {

    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    cout << "Original String: " << s << endl;

    string ans = reverseOnlyLetters(s);

    cout << "After Reversing Only Letters: "<< ans << endl;

    return 0;
}