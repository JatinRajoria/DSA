// Remove All Occurrences of a Substring (Leetcode 1910)
//
// Example:
//
// s = "daabcbaabcbc"
// part = "abc"
//
// Step 1:
// daabcbaabcbc
//   ---
// Remove "abc"
//
// dabaabcbc
//
// Step 2:
// dabaabcbc
//     ---
// Remove "abc"
//
// dabcbc
//
// Step 3:
// dabcbc
//   ---
// Remove "abc"
//
// dbc
//
// Final Answer:
// dbc

#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part){

    // part ki first occurrence find karo
    int pos = s.find(part);

    // Jab tak part string ke andar milta rahe
    while(pos != string::npos){

        // Found substring ko erase kar do
        s.erase(pos, part.length());

        // Dubara search karo
        pos = s.find(part);
    }

    // Final string return karo
    return s;
}

int main(){

    string s = "daabcbaabcbc";

    string part = "abc";

    string ans =
    removeOccurrences(s, part);

    cout << "Answer: "
         << ans << endl;

    return 0;
}