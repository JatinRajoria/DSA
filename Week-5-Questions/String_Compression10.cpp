//String Compression (LeetCode 443)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Example 1:

Input:
[a,a,b,b,c,c,c]

Output:
[a,2,b,2,c,3]
Return:
6

Example 2:

Input:
[a]

Output:
[a]

Return:
1

Example 3:

Input:
[a,b,b,b,b,b,b,b,b,b,b,b,b]

Output:
[a,b,1,2]

Return:
4

Approach:

1. Consecutive same characters count karo.
2. Character ko ek baar store karo.
3. Agar frequency > 1 ho to count bhi store karo.
4. Count ke digits reverse order me aate hain,
   isliye reverse() lagana padta hai.

TC: O(n)
SC: O(1)
*/

int compress(vector<char>& chars) {

    // Compressed array me write karne ke liye
    int index = 0;

    // Current character ki frequency
    int count = 1;

    // First character ko previous maan lo
    char prev = chars[0];

    // Second character se traversal start
    for(int i = 1; i < chars.size(); i++) {

        // Same character mila
        // frequency increase karo
        if(chars[i] == prev) {
            count++;
        }
        else {

            // Previous character store karo
            chars[index++] = prev;

            // Frequency 1 se zyada hai to count store karo
            if(count > 1) {
                int start = index;

                /*
                Example: count = 12

                Store:
                2
                1

                Isliye baad me reverse karenge
                */
                while(count > 0) {
                    chars[index++] = (count % 10) + '0';
                    count /= 10;
                }

                // 2 1 -> 1 2
                reverse(chars.begin() + start, chars.begin() + index);
            }

            // Naye group ke liye reset
            prev = chars[i];
            count = 1;
        }
    }

    // Last group loop ke baad bach jata hai
    chars[index++] = prev;

    if(count > 1) {

        int start = index;
        while(count > 0) {
            chars[index++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(chars.begin() + start, chars.begin() + index);
    }
    return index;
}

int main() {
    vector<char> chars =
    {'a','a','b','b','c','c','c'};
    int len = compress(chars);
    cout << "Compressed Array: ";
    for(int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    cout << "Length: " << len << endl;
    return 0;
}