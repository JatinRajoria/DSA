// Valid Palindrome II [leetcode 680]
//
// Ek character remove karne ki permission hai.
//
// Example:
//
// Input:
// abca
//
// i=0, j=3
// a == a
//
// i=1, j=2
// b != c
//
// Ab 2 possibilities:
//
// 1) b remove karo
//    "aca" -> palindrome
//
// 2) c remove karo
//    "aba" -> palindrome
//
// Dono me se koi bhi palindrome ban jaye
// toh answer true hoga.

#include<iostream>
#include<string>
using namespace std;

// Check karta hai ki given range palindrome hai ya nahi
bool checkPalindrome(string s, int i, int j){

    while(i <= j){

        // Mismatch mila
        if(s[i] != s[j])
            return false;

        // Dono equal hain
        // Toh andar move karo
        i++;
        j--;
    }

    return true;
}

bool validPalindrome(string s){

    int i = 0;
    int j = s.length() - 1;

    while(i <= j){

        // Mismatch mila
        if(s[i] != s[j]){

            // Case 1:
            // Left character remove karo

            // Case 2:
            // Right character remove karo

            return checkPalindrome(s, i+1, j) ||
                   checkPalindrome(s, i, j-1);
        }

        else{

            // Characters same hain
            i++;
            j--;
        }
    }

    // Puri string already palindrome thi
    return true;
}

int main(){

    string s;

    cout << "Enter String: ";
    cin >> s;

    if(validPalindrome(s)){

        cout << "True" << endl;
    }

    else{

        cout << "False" << endl;
    }

    return 0;
}