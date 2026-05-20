//Q. Common Elements in a 3 sorted array.
#include<iostream>
#include<vector>
using namespace std;

vector<int> commonElements(vector<int> &A, vector<int> &B, vector<int> &C) {

    vector<int> ans;

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n1 && j < n2 && k < n3) {

        // Common element
        if(A[i] == B[j] && B[j] == C[k]) {
            // Duplicate avoid
            if(ans.size() == 0 || ans.back() != A[i]) {
                ans.push_back(A[i]);
            }
            i++;
            j++;
            k++;
        }

        // Smallest element ko aage badhao
        else if(A[i] < B[j]) {

            i++;
        }
        else if(B[j] < C[k]) {

            j++;
        }
        else {
            k++;
        }
    }

    return ans;
}

int main() {

    vector<int> A{1,5,10,20,40,80};
    vector<int> B{6,7,20,80,100};
    vector<int> C{3,4,15,20,30,70,80,120};

    vector<int> ans = commonElements(A, B, C);

    cout << "Common Elements are: ";

    for(int i = 0; i < ans.size(); i++) {

        cout << ans[i] << " ";
    }

    return 0;
}