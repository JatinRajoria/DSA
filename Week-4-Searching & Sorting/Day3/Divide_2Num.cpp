// Divide 2 numbers using binary search
// formula used quotient * divisor <= dividend

#include <iostream>
using namespace std;

int solve(int dividend, int divisor){
    int start = 0;
    // last dividend hi hoga
    // abs isliye le rhe hai kyu ki sirf positive ana chiye negative no. ke baare me nhi sochna
    int end = abs(dividend);
    int mid = start + (end-start)/2;
    int ans = 0;

    while(start<=end){
        // perfect solution
        // ex: mid is 2 and divisor is 7 so 2*7 == 22 toh ye glt hai
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        // not perfect solution
        if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }
        else{
            // 1. answer store
            ans = mid;
            // 2. right search
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    // ye condition ans bhi us hisab se degi ki kissi me - ka sign hoga toh answer bhi - me
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
    return ans;
    else{
        return -ans;
    }
}

int main(){
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}