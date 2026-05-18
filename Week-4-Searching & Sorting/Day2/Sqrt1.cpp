// Square root of a number using binary search (example of integer)
// ex: n=25, mid=12 , 12*12=144 (bahut bda hai num n se so left search)
// e = 12-1 = 11 , mid = 5 , 5*5=25 , target value = 25 answer 
#include<iostream>
using namespace std;

int findSqrt(int n){
    int start=0;
    int end=n-1;
    int target=n;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid>target){
            // left search
            end = mid-1;
        }
        else{
            // right search
            ans=mid;
            start=mid+1;
        }
        mid = start + (end - start)/2;
    } 
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}