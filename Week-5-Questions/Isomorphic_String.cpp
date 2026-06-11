// // Isomporphic String (Leetcode 205)

// 1. One way
// // Approach: Hashing (Character Mapping)
// //
// // Time Complexity: O(N)
// // Space Complexity: O(1) -> 256 size arrays use ho rahi hain

// /*
// Example 1:

// Input:
// s = "egg"
// t = "add"

// Mapping:
// e -> a
// g -> d

// Check:
// e -> a ✔
// g -> d ✔
// g -> d ✔

// Output:
// true

// ---------------------------------------------------

// Example 2:

// Input:
// s = "foo"
// t = "bar"

// Mapping:
// f -> b
// o -> a

// Check:
// f -> b ✔
// o -> a ✔
// o -> r ✖ (o pehle se a se mapped tha)

// Output:
// false

// ---------------------------------------------------

// Example 3:

// Input:
// s = "paper"
// t = "title"

// Mapping:
// p -> t
// a -> i
// p -> t
// e -> l
// r -> e

// Output:
// true
// */

// #include <iostream>
// #include <string>
// using namespace std;

// bool isIsomorphic(string s, string t) {

//     // Agar lengths different hain,
//     // toh strings isomorphic nahi ho sakti
//     if(s.size() != t.size()) {
//         return false;
//     }

//     // s ke characters ki mapping store karega
//     // Example: hash['e'] = 'a'
//     int hash[256] = {0};

//     // Check karega ki t ka koi character
//     // pehle se kisi aur character ke saath mapped toh nahi hai
//     bool istCharsMapped[256] = {0};

//     // Mapping create karna
//     for(int i = 0; i < s.size(); i++) {

//         // Agar s[i] aur t[i] dono pehle map nahi hue hain
//         if(hash[s[i]] == 0 && istCharsMapped[t[i]] == 0) {

//             // Mapping store karo
//             hash[s[i]] = t[i];

//             // Mark karo ki t[i] use ho chuka hai
//             istCharsMapped[t[i]] = true;
//         }
//     }

//     // Ab verify karo ki sari mappings correct hain
//     for(int i = 0; i < s.size(); i++) {

//         // Agar expected mapping match nahi karti
//         if(char(hash[s[i]]) != t[i]) {

//             return false;
//         }
//     }

//     return true;
// }

// int main() {

//     string s, t;

//     cout << "Enter first string: ";
//     cin >> s;

//     cout << "Enter second string: ";
//     cin >> t;

//     if(isIsomorphic(s, t)) {
//         cout << "Strings are Isomorphic" << endl;
//     }
//     else {
//         cout << "Strings are NOT Isomorphic" << endl;
//     }

//     return 0;
// }




// 2. Another way
// LeetCode 205 - Isomorphic Strings
//
// Approach Used:
// Hashing + Character Mapping
//
// Idea:
// 1. hash[] store karega:
//      s[i] -> t[i] ki mapping
//
// 2. test[] check karega:
//      kya t[i] pehle se kisi aur
//      character se map ho chuka hai?
//
// Time Complexity: O(N)
// Space Complexity: O(1)

/*
Example 1:

Input:
s = "egg"
t = "add"

Mappings:
e -> a
g -> d

Dubara:
g -> d (same mapping)

Output:
true

------------------------------------------------

Example 2:

Input:
s = "foo"
t = "bar"

Mappings:
f -> b
o -> a

Ab:
o -> r

Lekin o pehle hi a se map ho chuka hai.

Output:
false

------------------------------------------------

Example 3:

Input:
s = "badc"
t = "baba"

Mappings:
b -> b
a -> a

Ab:
d -> b

Lekin b pehle hi use ho chuka hai.

Output:
false
*/

#include <iostream>
#include <string>

using namespace std;

bool isIsomorphic(string s, string t) {

    // Agar lengths different hain,
    // toh isomorphic nahi ho sakti
    if(s.size() != t.size()) {
        return false;
    }

    int i = 0;

    // s -> t mapping store karega
    int hash[128] = {0};

    // Check karega ki t ka character
    // pehle se kisi aur se map hua hai ya nahi
    bool test[128] = {0};

    while(i < s.size()) {

        // Case 1:
        // Ya toh s[i] ki mapping nahi bani hai
        //
        // Ya phir jo mapping bani hui hai,
        // wahi t[i] ke equal hai
        if(hash[s[i]] == 0 ||
           hash[s[i]] == t[i]) {

            // Agar mapping nahi bani hai
            // aur t[i] already use ho chuka hai,
            // toh false return karo
            if(hash[s[i]] == 0 &&
               test[t[i]] != 0) {
                return false;
            }

            // Mapping store karo
            //
            // Example:
            // e -> a
            hash[s[i]] = t[i];

            // Mark karo ki t[i]
            // ab use ho chuka hai
            test[t[i]] = true;
            i++;
        }
        // Case 2:
        // Existing mapping mismatch kar rahi hai
        //
        // Example:
        // o -> a hona chahiye tha
        // lekin t[i] = r mil gaya
        else if(char(hash[s[i]]) != t[i]) {
            return false;
        }
    }
    // Agar kahin bhi mismatch nahi mila
    return true;
}

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if(isIsomorphic(s, t)) {
        cout << "Strings are Isomorphic" << endl;
    }

    else {
        cout << "Strings are NOT Isomorphic" << endl;
    }
    return 0;
}