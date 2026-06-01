// bubble sort
// ith round me ith largest element ko unki right position pr place krte hai.
// a > b, swap
// iski T.C hogi 0(n) (best case jab array already sorted hogi)
// space complexity 0(1)
// round 1 me j 4 tak chlega round 2 me 3 tak round 3 me 2 tak round 4 me 1 tak round 5 me 0 tak
// n-row-1

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr{10,1,7,6,14,9};

    int n = arr.size();
    // bubble sort
    for(int round=1; round<n; round++){
        bool swapped = false;
        // j sorted last tak nhi jayega isliye n-i-1
        for(int j=0; j<n-round; j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false){
            // sort ho chuka hai, no need to check in further rounds
            break;
        }
    }

    // printing 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}