// Square root of a number using binary search (example of float)
// ex: n=10, mid=5, 5*5=25 after futher process 3 target but we need in floating point so take precision and increase number
// increase number like 3.1*3.1 < 10 -> true , 3.2*3.2 < 10 -> false
//  3.11*3.11 < 10 -> true, jab tak kro jab tak true hai 3.17*3.17 < true -> false so tha answer for precision 2(2 number lene hai dot ke baad) is 3.16
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

    // dot ke baad kitne number chah rhe hai yha pr lika diya ex 2 -> 10.23, 3-> 10.232, etc
    int precision;
    cout<<"Enter the number of floating digits in precision: "<<endl;
    cin>>precision;

    // mtlb me kya add krna chah rha hu 
    // start mene 0.1 se kri hai
    double step = 0.1;
    double finalAns = ans;
    // har ek digit add krna is loop ka kaam hai (like 0.1 then 0.01)
    for(int i=0; i<precision; i++){
        // is loop me final answer chla rhe hai(like 3 fir 3.1*3.1-> true 3.1+0.1=3.2 , 3.2*3.2-> false(bdi hai value)-> fir outer loop me gye step=step/10 toh 0.01 aya fir same tarika)
      // isme answer me precision add krke nearest value nikalne ki koshish kr rhe hai
      for(double j=finalAns; j*j<=n; j=j+step){
        finalAns = j;
      }
      // 0.1 ko 0.01 bnane ke liye aur aage tak jab tak value na aa jaye ex: 0.001 etc
      step = step / 10;
    }
    cout<<"Final Answer is : "<<finalAns<<endl;
    return 0;
}
