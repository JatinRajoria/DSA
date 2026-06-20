// LeetCode 767 - Reorganize String

// One way
// Approach Used:
// Greedy + Even Index Placement

// Idea:
// 1. Sabhi characters ki frequency count karo.
// 2. Jo character sabse zyada baar aa raha hai,
//    use pehle even indices (0, 2, 4...) par place karo.
// 3. Agar us character ki frequency abhi bhi bach jaye,
//    toh answer possible nahi hai.
// 4. Baaki characters ko remaining positions par place karo.

// Time Complexity: O(N)
// Space Complexity: O(1)

/*
Example:

Input:
s = "aaabbc"

Frequency:
a -> 3
b -> 2
c -> 1

------------------------------------

Step 1:
Most frequent character = 'a'

Even positions fill karenge:

Index: 0 1 2 3 4 5
String: _ _ _ _ _ _

Place 'a':

a _ _ _ _ _
a _ a _ _ _
a _ a _ a _

Remaining Frequency:
a -> 0
b -> 2
c -> 1

------------------------------------

Step 2:
Remaining characters place karo

Current index = 6

Index >= size ho gaya,
isliye odd index (1) se start karenge.

Place 'b':

a b a _ a _
a b a b a _

Remaining:
b -> 0
c -> 1

------------------------------------

Place 'c':

a b a b a c

Output:
"ababac"

------------------------------------

Impossible Case:

Input:
s = "aaab"

Frequency:
a -> 3
b -> 1

Even positions:
0 2

Sirf 2 jagah available hain,
lekin 'a' ki frequency 3 hai.

Output:
""
*/

#include <iostream>
#include <string>
#include <climits>

using namespace std;

string reorganizeString(string s) {
    // Frequency array
    int hash[26] = {0};
    // Count frequency of each character
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    // Find most frequent character
    char max_freq_char;
    int max_freq = INT_MIN;
    for(int i = 0; i < 26; i++) {
        if(hash[i] > max_freq) {
            max_freq = hash[i];
            // Convert index into character
            max_freq_char = i + 'a';
        }
    }
    // Place most frequent character first
    int index = 0;
    while(max_freq > 0 &&
          index < s.size()) {
        s[index] = max_freq_char;
        max_freq--;
        index += 2;
    }
    // Agar frequency abhi bhi bachi hui hai,
    // toh answer possible nahi hai
    if(max_freq != 0) {
        return "";
    }
    // Most frequent character ki frequency ko 0 kar do
    hash[max_freq_char - 'a'] = 0;
    // Remaining characters place karo
    for(int i = 0; i < 26; i++) {
        while(hash[i] > 0) {
            // Agar even positions khatam ho gayi,
            // toh odd positions se start karo
            if(index >= s.size()) {
                index = 1;
            }
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }
    return s;
}

int main() {

    string s;

    cout << "Enter the string: ";
    cin >> s;

    string ans = reorganizeString(s);

    if(ans == "") {
        cout << "Reorganization is not possible."<< endl;
    }

    else {
        cout << "Reorganized String: "<< ans << endl;
    }

    return 0;
}




// 2. Another way
// // Reorganize String (Brute Force Approach)

// // Idea:
// // 1. Har character ki frequency count karenge.
// // 2. Jab tak answer complete na ho:
// //      - 'a' se 'z' tak check karenge.
// //      - Jo character available ho (freq > 0)
// //      - Aur answer ke last character ke equal na ho,
// //        use answer me add kar denge.
// // 3. Agar kisi iteration me koi valid character na mile,
// //    toh reorganization possible nahi hai.

// // Time Complexity: O(26 × N) ≈ O(N)
// // Space Complexity: O(1)

// /*
// Example:

// Input:
// s = "aaabbc"

// Frequency:
// a -> 3
// b -> 2
// c -> 1

// Dry Run:

// ans = ""

// Iteration 1:
// a valid
// ans = "a"

// Frequency:
// a -> 2
// b -> 2
// c -> 1

// ----------------------------------

// Iteration 2:
// a invalid (same as ans.back())

// b valid

// ans = "ab"

// Frequency:
// a -> 2
// b -> 1
// c -> 1

// ----------------------------------

// Iteration 3:
// a valid

// ans = "aba"

// Frequency:
// a -> 1
// b -> 1
// c -> 1

// ----------------------------------

// Iteration 4:
// a invalid

// b valid

// ans = "abab"

// Frequency:
// a -> 1
// b -> 0
// c -> 1

// ----------------------------------

// Iteration 5:
// a valid

// ans = "ababa"

// Frequency:
// a -> 0
// b -> 0
// c -> 1

// ----------------------------------

// Iteration 6:
// c valid

// ans = "ababac"

// Output:
// "ababac"
// */

// #include <iostream>
// #include <string>

// using namespace std;

// string reorganizeString(string s) {

//     // Frequency array
//     int freq[26] = {0};

//     // Count frequency of each character
//     for(char ch : s) {

//         freq[ch - 'a']++;
//     }

//     string ans = "";

//     // Jab tak answer complete na ho
//     while(ans.length() < s.length()) {

//         bool found = false;

//         // 'a' se 'z' tak check karo
//         for(int i = 0; i < 26; i++) {

//             // Current character
//             char curr = i + 'a';

//             // Character available hona chahiye
//             if(freq[i] > 0) {

//                 // Agar answer empty hai
//                 // ya current character,
//                 // answer ke last character ke equal nahi hai
//                 if(ans.empty() ||
//                    ans.back() != curr) {

//                     // Character answer me add karo
//                     ans.push_back(curr);

//                     // Frequency decrease karo
//                     freq[i]--;
//                     found = true;
//                     // Ek character add ho gaya,
//                     // next iteration me jao
//                     break;
//                 }
//             }
//         }
//         // Agar koi valid character nahi mila
//         if(!found) {
//             return "";
//         }
//     }
//     return ans;
// }

// int main() {
//     string s;
//     cout << "Enter the string: ";
//     cin >> s;

//     string ans = reorganizeString(s);

//     if(ans == "") {
//         cout << "Reorganization is not possible."<< endl;
//     }

//     else {
//         cout << "Reorganized String: "<< ans << endl;
//     }

//     return 0;
// }