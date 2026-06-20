// Largest Number (Leetcode 179)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Example 1:

Input:
nums = [10, 2]

Output:
"210"

Explanation:

Compare:

"10" + "2" = "102"
"2" + "10" = "210"

210 > 102

So:
2 should come before 10

Answer:
210

------------------------------------------------

Example 2:

Input:
nums = [3,30,34,5,9]

Output:
"9534330"

Explanation:

Compare:

9 before everyone

5 before 34

34 before 3

3 before 30

Sorted Order:

[9,5,34,3,30]

Answer:

9534330

------------------------------------------------

Important Observation:

Normal descending sorting won't work.

Example:

nums = [3,30]

Normal Sort:

30 3

Answer:
303

But actual largest number:

3 30

Answer:
330

So we need a custom comparator.

------------------------------------------

Approach:

For every pair (a,b):

Check:

a+b
b+a

If:

a+b > b+a

Then place 'a' before 'b'.

Otherwise place 'b' before 'a'.

After sorting,
join all strings.

Special Case:

[0,0,0]

Output should be:

"0"

not

"000"


TC: O(n log n * k)

n = number of elements
k = maximum digits in a number

SC: O(n)
*/


// Custom comparator
bool mycomp(string a, string b){

    /*
    Example:

    a = "9"
    b = "34"

    a+b = "934"
    b+a = "349"

    934 > 349

    So 9 should come before 34
    */

    string t1 = a + b;
    string t2 = b + a;

    return t1 > t2;
}


string largestNumber(vector<int>& nums){

    // Integer numbers ko strings me convert karenge
    vector<string> snums;

    for(int num : nums){
        snums.push_back(to_string(num));
    }

    // Custom sorting
    sort(snums.begin(),snums.end(), mycomp);

    /*
    Edge Case:

    nums = [0,0,0]

    Sorted:

    ["0","0","0"]

    Answer should be:

    "0"
    */
    if(snums[0] == "0"){
        return "0";
    }

    // Final answer
    string ans = "";

    // Saare strings ko join kar do
    for(string str : snums){
        ans += str;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    string ans = largestNumber(nums);
    cout << "Largest Number: "<< ans<< endl;

    return 0;
}