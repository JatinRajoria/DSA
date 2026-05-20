// Pivot Element in Rotated Sorted Array
// rotated & sorted array
// no duplicate element
// ex. sorted array : 2|4|6|8|9|10
// rotated: 10|2|4|6|8|9
// rotated: 9|10|2|4|6|8
// isme dekh rhe hai 9,10 increasing hai aur 10 se 2 decrease toh 10 pivot element hai fir 2 se 8 tak increase oreder me hai
// kyuki Yaha 10 sabse bada hai aur 10 ke baad chhota element 2 aa raha hai isliye 10 pivot element hai


#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr){

    // Starting index
    int start = 0;

    // Ending index
    int end = arr.size() - 1;

    // Mid nikal liya
    int mid = start + (end - start) / 2;

    // Jab tak search space valid hai
    while(start <= end){

        // single element in array ya fir kuch toh answer de chahe last element hi de isliye ye kr rhe hai
        if(start == end){
            return start;
        }

        // Case 1:
        // Agar mid element next element se bada hai
        // toh mid pivot hoga

        // Example:
        // 10 > 2
        if(mid < end && arr[mid] > arr[mid + 1]){

            return mid;
        }

        // Case 2:
        // Agar previous element current se bada hai
        // toh previous pivot hoga

        // Example:
        // 10 > 2
        if(mid - 1 >= start && arr[mid - 1] > arr[mid]){

            return mid - 1;
        }

        // Case 3:
        // Agar left side unsorted hai
        // toh pivot left side me hoga

        if(arr[start] > arr[mid]){

            // Left search
            end = mid - 1;
        }

        // Case 4:
        // warna pivot right side me hoga
        else{
            // Right search
            start = mid + 1;
        }

        // Mid update
        mid = start + (end - start) / 2;
    }

    // Agar pivot nahi mila
    return -1;
}

int main(){
    vector<int> arr{8,9,10,2,4,6,7};
    int ans = findPivot(arr);
    if(ans == -1){
        cout << "Kuch gadbad hai" << endl;
    }
    else{
        cout << "Pivot index is: "<< ans<< endl;
        cout << "Pivot value is: "<< arr[ans]<< endl;
    }

    return 0;
}