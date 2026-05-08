// Program to print intersection of 2 array
// ex. a[] => {1,3,5,6,7,8,9};  b[] => {2,4,6,8,10};  ans[] => {6,8}
// agar do bar {3,3} esse ho a me bhi aur b me bhi toh mark bna lo aur usse check kr do jab ek baar element check ho jaye
// isme dono me jo element same honge vo ans me print ho jayegne

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{1,3,3,5,6,7,8,9};
    vector <int> brr{2,3,3,4,6,8,10};

    vector <int> ans;

    // outer loop on arr vector
    for(int i=0; i<arr.size(); i++){
        // for every element run loop on brr
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                // mark jisee ek a{3,3} do baar ho uske liye 
                brr[j] = -1;
                ans.push_back(arr[i]);
            }
        }
    }

    cout<<"Printing an array "<<endl;
    // print
        for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
