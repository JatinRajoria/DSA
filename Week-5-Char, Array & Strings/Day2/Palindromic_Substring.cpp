// Palindromic Substrings [Leetcode 647]
// Count Palindromic Substrings
//
// Example:
//
// Input:
// "aaa"
//
// Palindromic Substrings:
//
// a
// a
// a
// aa
// aa
// aaa
//
// Total = 6

#include<iostream>
#include<string>
using namespace std;

// Center se left aur right expand karke
// count karta hai kitne palindrome ban rahe hain
int expandAroundIndex(string s, int left, int right){

    int count = 0;

    // Jab tak:
    // 1. Left valid hai
    // 2. Right valid hai
    // 3. Dono characters same hain
    while(left >= 0 && right < s.length() && s[left] == s[right]){

        // Ek palindrome mil gaya
        count++;

        // Aur bada palindrome check karne ke liye
        // left ko piche aur right ko aage le jao
        left--;
        right++;
    }

    return count;
}

int countSubstrings(string s){

    int totalcount = 0;

    int n = s.length();

    // Har index ko center maanenge
    for(int center = 0; center < n; center++){

        // Odd length palindrome
        //
        // Example:
        // aba
        //  ^
        //
        int oddKaAns = expandAroundIndex(s, center, center);

        totalcount = totalcount + oddKaAns;

        // Even length palindrome
        //
        // Example:
        // abba
        //   ^^
        //
        int evenKaAns = expandAroundIndex(s, center, center + 1);

        totalcount = totalcount + evenKaAns;
    }

    return totalcount;
}

int main(){

    string s = "aaa";

    int ans = countSubstrings(s);

    cout << "Total Palindromic Substrings: "<< ans << endl;

    return 0;
}