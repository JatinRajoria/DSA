#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    // integer overflow ka issue aa skta hai esse
    // int mid = (start+end)/2;

    // isse bchne ke liye
    int mid = start + (end-start)/2;

    while(start<=end){
        int element = arr[mid];

        if(element==target){
            return mid;
        }
        else if(target < element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
            mid = start + (end-start)/2;
    }
    // element nhi mila hai
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12};
    int size = 6;
    int target = 8;
    
    int indexOfTarget = binarySearch(arr, size, target);

    if(indexOfTarget == -1){
        cout<<"Target not found."<<endl;
    }
    else{
        cout<<"Target found at "<<indexOfTarget<<" index "<<endl;
    }
    return 0;
}