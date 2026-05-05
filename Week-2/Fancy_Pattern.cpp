#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
         for(int i=0; i<n; i++){
        // half pyramid
        for(int j=0; j<i+1; j++){
            cout<<i+1;
            // last character pr star print nhi krna hai
            if(j!=i){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // other half
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<n-i;
            // last character pr star print nhi krna hai
            if(j!=n-i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}