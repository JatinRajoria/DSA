#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 1.
    // // 2D array 
    // // isme bahar wle vector ke andar vector int type ka data push hota hai aur andar wle ke andar int type ka data hoga
    // vector<vector<int> > arr;

    // vector <int> a{1,2,3};
    // vector <int> b{2,4,6};
    // vector <int> c{1,3,7};

    // // arr outer vector ko darsha rha hai
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout << arr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }


    // 2. 
    int row = 3;
    int col = 5;
    // no. of rows 3 chiye aur uska vector<int>(5,0) size 5 aur elem 0
    vector<vector<int> > arr(row, vector<int>(col,0));
        for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}