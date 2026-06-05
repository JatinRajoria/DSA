// Remove All Adjacent Duplicates In String (Leetcode 1047)
//
// Example:
//
// Input:
// abbaca
//
// Dry Run:
//
// ans = ""
//
// a -> ans empty -> push
// ans = "a"
//
// b -> last char = a
// a != b -> push
// ans = "ab"
//
// b -> last char = b
// b == b -> pop
// ans = "a"
//
// a -> last char = a
// a == a -> pop
// ans = ""
//
// c -> ans empty -> push
// ans = "c"
//
// a -> last char = c
// c != a -> push
// ans = "ca"
//
// Final Answer:
// ca

#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s){

    // Answer string
    // Stack ki tarah use karenge
    string ans = "";

    int i = 0;

    while(i < s.length()){

        // Agar ans empty nahi hai
        // aur last character current character ke equal hai
        if(ans.length() > 0 &&
           ans[ans.length()-1] == s[i]){

            // Duplicate pair remove kar do
            ans.pop_back();
        }

        else{

            // Character ko answer me add kar do
            ans.push_back(s[i]);
        }

        // Next character par move karo
        i++;
    }

    return ans;
}

int main(){

    string s;

    cout << "Enter String: ";
    cin >> s;

    string ans = removeDuplicates(s);

    cout << "Answer: "
         << ans << endl;

    return 0;
}