// Program to find unique element(every element occur twice except one)
// we find it using xor in xor same element cancel out
// no. of elements : 11
// elements lenge ex 1 2 3 4 5 6 1 2 4 5 6 
//  kese krega 0^1^

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector <int> arr){
    // kyu ki 0 se XOR 1 krenge toh 1 ayega isliye 0 se initialize kiya hai
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
    // Saare elements ka XOR le rahe hain
        ans = ans ^ arr[i];
    }
    // return isliye kiya hai kyuki int uniqueELement me bola hai apan ne niche ki ye integer return krega
    return ans;
}

int main(){
    int n;
    cout<<"Enter the no. of elements "<<endl;
    cin>>n;
    
    cout<<"The elements you want to print are: "<<endl;
    vector <int> arr(n);
    // taking input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout<<"Unique Element is "<<uniqueElement<<endl;
    return 0;
}