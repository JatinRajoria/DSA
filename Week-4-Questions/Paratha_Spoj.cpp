// SPOJ - PRATA (Roti Prata)

// Example Input:
// Enter number of test cases: 1
//
// Test Case 1
// Enter number of parathas to make: 10
// Enter number of cooks: 4
// Enter ranks of cooks: 1 2 3 4
//
// Output:
// Minimum time required: 12

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Check function
// Kya given 'mid' time ke andar nP parathe ban sakte hain?
bool isPossibleSolution(vector<int> cooksRanks,
                        int nP,
                        int mid){

    // Ab tak kitne parathe bane
    int currP = 0;

    // Har cook ko check karenge
    for(int i = 0; i < cooksRanks.size(); i++){

        // Current cook ki rank
        int R = cooksRanks[i];

        // Current cook ka next paratha number
        int j = 1;

        // Current cook ne kitna time use kiya
        int timeTaken = 0;

        while(true){

            // Agar current cook next paratha
            // given mid time ke andar bana sakta hai
            if(timeTaken + j * R <= mid){

                currP++;

                timeTaken += j * R;

                j++;
            }
            else{

                break;
            }
        }

        // Required parathe ban gaye
        if(currP >= nP){

            return true;
        }
    }

    return false;
}


int minTimeToCompleteOrder(vector<int> cooksRanks,
                           int nP){

    // Minimum possible answer
    int start = 0;


    // Sabse slow cook ki rank
    int highestRank =
    *max_element(cooksRanks.begin(),
                 cooksRanks.end());


    // Worst case:
    // Slowest cook saare parathe banaye
    int end =
    highestRank *
    (nP * (nP + 1) / 2);


    int ans = -1;


    // Binary Search on Answer
    while(start <= end){

        int mid =
        start + (end - start) / 2;


        if(isPossibleSolution(cooksRanks,
                              nP,
                              mid)){

            // Mid sufficient hai
            ans = mid;

            // Aur minimum answer dhundo
            end = mid - 1;
        }

        else{

            // Mid kam hai
            start = mid + 1;
        }
    }

    return ans;
}



int main(){

    int T;

    cout << "Enter number of test cases: ";
    cin >> T;

    while(T--){

        int nP, nC;

        cout << "\nEnter number of parathas to make: ";
        cin >> nP;

        cout << "Enter number of cooks: ";
        cin >> nC;


        vector<int> cooksRanks;

        cout << "Enter ranks of cooks: ";

        while(nC--){

            int R;

            cin >> R;

            cooksRanks.push_back(R);
        }


        cout << "Minimum time required: "
             << minTimeToCompleteOrder(cooksRanks,
                                       nP)
             << endl;
    }

    return 0;
}