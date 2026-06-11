// Valid Anagram (Brute Force Approach using Sorting) (Leetcode 242)
// iski T.C -> n(lon n)
/*
Example:

s = "anagram"
t = "nagaram"

Step 1: Check lengths
s.length() = 7
t.length() = 7

Same length -> aage badho

Step 2: Sort both strings

Before Sorting:
s = anagram
t = nagaram

After Sorting:
s = aaagmnr
t = aaagmnr

Step 3: Compare

aaagmnr == aaagmnr

Answer = true
*/

// 1. using brute force (s ko sort kro, t ko sort kro fir compare kro)
// #include <iostream>
// #include <algorithm>   // sort() ke liye
// #include <string>
// using namespace std;

// // Function to check whether two strings are anagrams or not
// bool isAnagram(string s, string t) {

//     // Step 1:
//     // Agar lengths different hain,
//     // toh anagram ho hi nahi sakte
//     if(s.length() != t.length()) {
//         return false;
//     }

//     // Step 2:
//     // Dono strings ko ascending order me sort karo
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     // Example:
//     // s = "anagram" -> "aaagmnr"
//     // t = "nagaram" -> "aaagmnr"

//     // Step 3:
//     // Agar sorted strings same hain,
//     // toh dono anagrams hain
//     return s == t ? true : false;
// }

// int main() {

//     string s, t;

//     cout << "Enter first string: ";
//     cin >> s;

//     cout << "Enter second string: ";
//     cin >> t;

//     // Function call
//     if(isAnagram(s, t)) {
//         cout << "Strings are Anagrams." << endl;
//     }
//     else {
//         cout << "Strings are NOT Anagrams." << endl;
//     }

//     return 0;
// }






//  2. 
// Valid Anagram (Optimized Approach using Frequency Array)
// iski T.C 0(n)
/*
Example:

s = "anagram"
t = "nagaram"

Step 1:
Count frequency of characters in s

'a' -> 3
'n' -> 1
'g' -> 1
'r' -> 1
'm' -> 1

Step 2:
Decrease frequency using t

After processing "nagaram":

'a' -> 0
'n' -> 0
'g' -> 0
'r' -> 0
'm' -> 0

Step 3:
Check the entire frequency array

Agar sab elements 0 hain:
    -> Strings are Anagrams

Agar koi bhi element non-zero hai:
    -> Strings are NOT Anagrams
*/

#include <iostream>
#include <string>
using namespace std;

// Function to check whether two strings are anagrams or not
bool isAnagram(string s, string t) {

    // Frequency array of size 256
    // ASCII characters ko store karne ke liye
    int listChar[256] = {0};

    // Step 1:
    // First string ke har character ki frequency increase karo
    for(int i = 0; i < s.size(); i++) {

        // Example:
        // s = "anagram"

        // listChar['a']++
        // listChar['n']++
        // listChar['a']++
        // listChar['g']++
        // listChar['r']++
        // listChar['a']++
        // listChar['m']++

        listChar[s[i]]++;
    }


    // Step 2:
    // Second string ke har character ki frequency decrease karo
    for(int i = 0; i < t.size(); i++) {

        // Example:
        // t = "nagaram"

        // listChar['n']--
        // listChar['a']--
        // listChar['g']--
        // listChar['a']--
        // listChar['r']--
        // listChar['a']--
        // listChar['m']--

        listChar[t[i]]--;
    }


    // Step 3:
    // Check karo ki saari frequencies 0 hain ya nahi
    for(int i = 0; i < 256; i++) {

        // Agar koi bhi frequency 0 nahi hai,
        // matlab strings anagram nahi hain
        if(listChar[i] != 0) {

            return false;
        }
    }


    // Agar sab frequencies 0 hain,
    // matlab strings anagram hain
    return true;
}

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if(isAnagram(s, t)) {

        cout << "Strings are Anagrams." << endl;
    }
    else {

        cout << "Strings are NOT Anagrams." << endl;
    }

    return 0;
}