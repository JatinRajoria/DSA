// Zigzag Conversion (Leetcode - 6)

/*
Example:

Input:
s = "PAYPALISHIRING"
numRows = 3

Zigzag Form:

Row 0: P   A   H   N
Row 1: A P L S I I G
Row 2: Y   I   R

Output:
"PAHNAPLSIIGYIR"

------------------------------------------------

Dry Run:

s = PAYPALISHIRING
numRows = 3

Step 1 (Downward):

Row 0 -> P
Row 1 -> A
Row 2 -> Y

Step 2 (Upward):

Row 1 -> P
Row 0 -> A

Step 3 (Downward):

Row 1 -> L
Row 2 -> I

Step 4 (Upward):

Row 1 -> S
Row 0 -> H

...

Finally:

Row 0 = PAHN
Row 1 = APLSIIG
Row 2 = YIR

Answer:

PAHN + APLSIIG + YIR

= PAHNAPLSIIGYIR

------------------------------------------------

Approach:

1. Har row ke liye ek string banao.
2. Pehle downward move karo.
3. Phir upward move karo.
4. Characters ko respective row me store karo.
5. End me saari rows ko jod do.

TC: O(n)
SC: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows) {

    // Special case:
    // Agar sirf 1 row hai toh zigzag banega hi nahi
    if(numRows == 1)
        return s;

    // Har row ki string store karega
    vector<string> zigzag(numRows);

    // String traversal index
    int i = 0;

    // Current row
    int row = 0;

    // true  -> downward
    // false -> upward
    bool direction = true;

    while(true) {
        // DOWNWARD MOVEMENT
        if(direction) {

            /*
            Example:

            Row 0 -> P
            Row 1 -> A
            Row 2 -> Y
            */

            while(row < numRows &&
                  i < s.size()) {

                zigzag[row]
                    .push_back(s[i]);

                row++;
                i++;
            }

            /*
            Last row tak pahunch gaye.

            Row:
            0
            1
            2 <- last

            Ab upward jana hai.

            Isliye row = 1
            */
            row = numRows - 2;
        }

        // UPWARD MOVEMENT
        else {

            /*
            Example:

            Row 1 -> P
            Row 0 -> A
            */

            while(row >= 0 &&
                  i < s.size()) {

                zigzag[row]
                    .push_back(s[i]);

                row--;
                i++;
            }

            /*
            Top row par pahunch gaye.

            Row:
            0 <- top

            Ab niche jana hai.

            Isliye row = 1
            */
            row = 1;
        }

        // Saare characters process ho gaye
        if(i >= s.size())
            break;

        // Direction change karo
        direction = !direction;
    }

    // Final answer
    string ans = "";

    // Sab rows ko join karo
    for(int i = 0;
        i < zigzag.size(); i++) {
        ans += zigzag[i];
    }
    return ans;
}

int main() {

    string s;
    int numRows;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter number of rows: ";
    cin >> numRows;

    string ans = convert(s, numRows);

    cout << "Zigzag Conversion: " << ans << endl;

    return 0;
}