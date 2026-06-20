//  Find the index of the first occurence (leetcode 28)
 
 // Example:
    // haystack = "sadbutsad"
    // needle   = "sad"
    
    // Dry Run:
    
    // i = 0
    // j = 0 -> 's' == 's' ✓
    // j = 1 -> 'a' == 'a' ✓
    // j = 2 -> 'd' == 'd' ✓
    
    // Since j == m-1 (2 == 2),
    // return i = 0

#include <iostream>
#include <string>
using namespace std;

// Function to find the first occurrence of needle in haystack
int strStr(string haystack, string needle) {

    int n = haystack.size();   // Length of haystack string
    int m = needle.size();     // Length of needle string

    // Check every possible starting position in haystack
    for (int i = 0; i <= n - m; i++) {
        // Compare needle with haystack starting from index i
        for (int j = 0; j < m; j++) {
            // If characters do not match, stop checking this position
            if (needle[j] != haystack[i + j]) {
                break;
            }

            // If we reach the last character of needle,
            // it means the entire needle is matched
            if (j == m - 1) {
                return i;
            }
        }
    }
    // Needle not found
    return -1;
}

int main() {

    string haystack, needle;

    cout << "Enter haystack string: ";
    cin >> haystack;

    cout << "Enter needle string: ";
    cin >> needle;

    int ans = strStr(haystack, needle);
    if (ans != -1) {
        cout << "Needle found at index: " << ans << endl;
    }
    else {
        cout << "Needle not found." << endl;
    }
    return 0;
}