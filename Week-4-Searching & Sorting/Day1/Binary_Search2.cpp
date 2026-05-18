// binary search using pre defined function (vector)

#include <iostream>
// pre defined header file of binary seach
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v{1,2,3,4,5,6};

    // 3 target element hai jo dhund rhe hai
    // pre defined function of binary search
    if(binary_search(v.begin(), v.end(), 3)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl ;

    }
}