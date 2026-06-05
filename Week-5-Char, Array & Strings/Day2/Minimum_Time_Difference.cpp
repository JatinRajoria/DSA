// Minimum Time Difference [leetcode 539]
//
// Given:
// timePoints = {"23:59", "00:00"}
//
// Output:
// 1
//
// Kyuki:
//
// 23:59 = 1439 minutes
// 00:00 = 0 minutes
//
// Direct difference:
// 1439 - 0 = 1439
//
// Lekin clock circular hoti hai:
//
// 23:59 -> 00:00
//
// Sirf 1 minute lagta hai.
//
// Isliye answer = 1

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int findMinDifference(vector<string>& timePoints){

    // Step 1:
    // HH:MM format ko total minutes me convert karenge
    vector<int> minutes;

    for(int i = 0; i < timePoints.size(); i++){

        string curr = timePoints[i];

        // First 2 characters -> Hours
        int hours = stoi(curr.substr(0, 2));

        // Index 3 se 2 characters -> Minutes
        int min = stoi(curr.substr(3, 2));

        // Total minutes calculate
        int totalMinutes = hours * 60 + min;

        // Store
        minutes.push_back(totalMinutes);
    }

    // Step 2:
    // Sare minutes sort karo
    sort(minutes.begin(), minutes.end());

    // Step 3:
    // Adjacent elements ka difference nikalenge
    int mini = INT_MAX;

    int n = minutes.size();

    // Consecutive time points ka difference
    for(int i = 0; i < n - 1; i++){

        int diff = minutes[i + 1] - minutes[i];

        mini = min(mini, diff);
    }

    // Step 4:
    // Circular difference check karo
    // ye 24 baj gye isliye 00:00
    // Example:
    // 23:59 -> 1439
    // 00:00 -> 0
    // first aur last wle ka diff nhi check kiya kyu ki clock circular hoti hai
    // Difference:
    // (0 + 1440) - 1439 = 1

    int lastDiff1 = (minutes[0] + 1440) - minutes[n - 1];

    // Step 5:
    // Normal first aur last element ka difference
    //
    // Example:
    // 1439 - 0
    // = 1439

    int lastDiff2 =minutes[n - 1] - minutes[0];

    // Adjacent difference,
    // Circular difference,
    // Normal first-last difference
    // tino me se minimum answer lo

    int lastDiff = min(lastDiff1, lastDiff2);
    mini = min(mini, lastDiff);

    return mini;
}

int main(){

    vector<string> timePoints{"23:59","00:00"};

    int ans = findMinDifference(timePoints);

    cout << "Minimum Difference: "<< ans << endl;

    return 0;
}