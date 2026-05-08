// Program to print union of 2 array
// ex. a[] => {2,4,6,8};  b[] => {1,3,5,7};  ans[] => {2,4,6,8,1,3,5,7};
// in this ex. we are not taking duplicate values

// algo: step:1 -> Create an ans array/vector
    // step:2 -> put all the elements of a[] into ans array.
    // step:3 -> put all the elements of b[] into ans array.


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {2,4,6,8};
    int sizea=4;
    int brr[] = {1,3,5,7};
    int sizeb=4;

    vector <int> ans;

    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

        for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    cout<<"Printing an array "<<endl;
    // print
        for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
