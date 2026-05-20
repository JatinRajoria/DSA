//Q. Sprial Print a Matrix
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;

    int n = matrix.size();
    int m = matrix[0].size();

    int total_elements = n * m;

    int startingRow = 0;
    int endingRow = n - 1;

    int startingCol = 0;
    int endingCol = m - 1;

    int count = 0;

    while(count < total_elements) {

        // Print starting row
        for(int i = startingCol;
            i <= endingCol;
            i++) {

            ans.push_back(matrix[startingRow][i]);

            count++;
        }

        startingRow++;

        // Print ending column
        for(int i = startingRow;
            i <= endingRow;
            i++) {

            ans.push_back(matrix[i][endingCol]);

            count++;
        }

        endingCol--;

        // Print ending row
        for(int i = endingCol;
            i >= startingCol;
            i--) {

            ans.push_back(matrix[endingRow][i]);

            count++;
        }

        endingRow--;

        // Print starting column
        for(int i = endingRow;
            i >= startingRow;
            i--) {

            ans.push_back(matrix[i][startingCol]);

            count++;
        }

        startingCol++;
    }

    return ans;
}

int main() {

    vector<vector<int>> matrix{
        // {1,2,3,4},
        // {5,6,7,8},
        // {9,10,11,12},
        // {13,14,15,16}
        {1,2,3,4},{5,6,7,8},{9,10,11,12}
    };

    vector<int> ans = spiralOrder(matrix);

    cout << "Spiral Order is: ";

    for(int i = 0; i < ans.size(); i++) {

        cout << ans[i] << " ";
    }

    return 0;
}