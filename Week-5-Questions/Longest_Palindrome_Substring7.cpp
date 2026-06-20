// LeetCode 5 - Longest Palindromic Substring
// Approach Used: Brute Force

// 1. Har possible substring generate karenge.
// 2. Check karenge ki substring palindrome hai ya nahi.
// 3. Agar palindrome hai aur current answer se badi hai, toh answer update kar denge.

// Time Complexity: O(N³)
// Space Complexity: O(1)


// Example:

// Input:
// s = "babad"

// Possible Substrings:

// i = 0
// j = 0 -> "b"      -> Palindrome
// j = 1 -> "ba"   
// j = 2 -> "bab"    -> Palindrome 
// j = 3 -> "baba" 
// j = 4 -> "babad" 

// Current Answer = "bab"

// --------------------------------------

// i = 1
// j = 1 -> "a"      -> Palindrome ✔
// j = 2 -> "ab"  
// j = 3 -> "aba"    -> Palindrome 
// j = 4 -> "abad"   

// Current Answer = "bab"
// ("aba" ki length bhi 3 hai,
// isliye answer update nahi hoga)

// --------------------------------------

// Final Answer:

// "bab"

#include <iostream>
#include <string>
using namespace std;


// Function to check palindrome
bool isPalindrome(string& s, int start, int end){

    // Two Pointer Approach
    while(start < end){
        // Agar characters match nahi karte
        if(s[start] != s[end]){
            return false;
        }
        // Dono pointers ko andar move karo
        start++;
        end--;
    }
    // Agar pura loop chal gaya
    // toh palindrome hai
    return true;
}

string longestPalindrome(string s){
    // Longest palindrome store karega
    string ans = "";
    // Starting index
    for(int i = 0; i < s.size(); i++){
        // Ending index
        // IMPORTANT:
        // j ko i se start karna hai
        // taaki single character substrings bhi check ho
        for(int j = i; j < s.size(); j++){
            // Check karo palindrome hai ya nahi
            if(isPalindrome(s, i, j)){

                // Current palindrome substring nikalo
                string t =
                s.substr(i, j - i + 1);

                // Agar current palindrome badi hai
                // toh answer update karo
                ans =
                t.size() > ans.size()
                ? t
                : ans;
            }
        }
    }
    return ans;
}


int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string ans =
    longestPalindrome(s);
    cout << "Longest Palindromic Substring: "<< ans<< endl;
    return 0;
}