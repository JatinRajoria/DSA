// Check given no. is prime or not

#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i=2;
    for(i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<"Prime No."<<endl;
    }
    else{
        cout<<"Not a Prime No."<<endl;
    }
}