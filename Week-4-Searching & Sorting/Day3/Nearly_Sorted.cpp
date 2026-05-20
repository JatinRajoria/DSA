// Binary Search in a nearly sorted array.
//  ex {10,3,40,20,50,60,70} mtlb ye sorted nhi hai but sorted le pass hai
// isme jo element i position pr pda hota hai vo i pr mil skta hai ya i-1 pr ya i+1 pr
// ex mid lenge toh i+1 aur i-1 bhi lenge
// nearly sorted array me sorted array ke ass pass pda hota hai jesse sorted me 6 , index 5 pr hai 
// toh nealy sorted me 6 -> 5,6,7 index pr me se kissi pr pda hoga

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == target)
            return mid;
        // isse agar start change hua pr hoga toh ye check krega mid-1>=start
        if(mid-1 >= start && arr[mid-1] == target)
            return mid-1;
        // isme mid+1 arr ki size se jyada hoga tab ye check krenge
        if(mid+1 < end && arr[mid+1] == target)
            return mid+1;
        if(target>arr[mid])
        // Right Search
        // mid+2 isliye kr rhe hai kyu ki mid+1 toh phle hi krke dekh liye upar
        start = mid+2;
        else{
            // Left Search
            end = mid-2;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    vector <int> arr{10,3,40,20,50,60,70};
    int target = 40;

    int ans = binarySearch(arr, target);
    cout<<"Index of "<<target<<" is "<<ans<<endl;
    return 0;
}