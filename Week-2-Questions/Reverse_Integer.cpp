#include<iostream>
using namespace std;

int revInt(int n){
    int rev=0;
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;        
    }
    return rev;
}

int main(){

    int n;
    cout<<"Enter the number to reverse: "<<endl;
    cin >> n;
    cout <<"The reverse value of "<<n<<" is "<<revInt(n)<<endl;
    return 0;
}