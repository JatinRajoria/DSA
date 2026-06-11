// Longest Common Prefix (Leetcode 14)
//
// Approach: Vertical Scanning
//
// Idea:
// Har index i par sabhi strings ke characters compare karenge.
// Agar sab same hain -> answer me add kar do.
// Agar mismatch aa jaye ya kisi string ka end aa jaye,
// toh wahi tak common prefix hoga.
//
// Time Complexity: O(N × M)
// N = number of strings
// M = shortest string ki length
//
// Space Complexity: O(1)
// (answer string ko ignore karte hue)

/*
Example:

Input:
strs = {"flower", "flow", "flight"}

Index:   0
flower -> f
flow   -> f
flight -> f

Sab same hain
ans = "f"

------------------------------------

Index:   1
flower -> l
flow   -> l
flight -> l

Sab same hain
ans = "fl"

------------------------------------

Index:   2
flower -> o
flow   -> o
flight -> i

Mismatch mil gaya

Loop stop

Final Answer:
"fl"
*/

// another test case
// ["","b"]
// expected output: ""

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    // Final answer store karega
    string ans;

    // Current index
    int i = 0;

    while(true) {

        // Current character jo compare karna hai
        char curr_ch = 0;

        // Sab strings par iterate karo
        for(auto str : strs) {
            // agar str phle  se empty hoto
                if(str.empty()) {
                   return "";
                }

            // Agar kisi string ki length khatam ho gayi
            if(i >= str.size()) {

                curr_ch = 0;
                break;
            }

            // Pehli string ka character store karo
            if(curr_ch == 0) {

                curr_ch = str[i];
            }

            // Agar kisi string me mismatch mil gaya
            else if(str[i] != curr_ch) {

                curr_ch = 0;
                break;
            }
        }

        // Mismatch mil gaya
        if(curr_ch == 0) {

            break;
        }

        // Common character answer me add karo
        ans.push_back(curr_ch);

        // Next index par jao
        i++;
    }

    return ans;
}

int main() {

    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings:" << endl;

    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string ans = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: "<< ans << endl;

    return 0;
}