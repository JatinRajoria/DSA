//Q. Find the element that appears odd number of times
// 1. All elements occur even no. of times except one.
// 2. All repeatating occurence of elements in pairs ex. 2 2 3 3 & pairs are not adjucent ex. 2 2 2 2 (ye 2 pairs sath me nhi honge)
//  (there cannot be more than 2 concrete occurence of an element) -> 2 pairs se jyada baar koi nhi aa rhe.

#include<iostream>
#include<vector>
using namespace std;

int solve(vector <int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(start == end){
            // single element
            return start;
        }

        // 2 cases -> mid - even or mid - odd
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                start = mid+2;
            }
            else{
                end = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid-1]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    vector <int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"Value is "<<arr[ans]<<endl;
    return 0;
}