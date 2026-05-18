// binary search using pre defined function (array)

#include <iostream>
// pre defined header file of binary seach
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    // 3 target element hai jo dhund rhe hai
    // pre defined function of binary search
    if(binary_search(arr, arr+size, 3)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl ;

    }
}