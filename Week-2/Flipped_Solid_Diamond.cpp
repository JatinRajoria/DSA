#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // 
    for(int i=0; i<n; i++){
        // half pyramid
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        
        // space wla full pyramid
        for(int j=0; j<2*i+1; j++){
            cout<<" ";
        }

        // half pyramid
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // 
     for(int i=0; i<n; i++){
        // half pyramid
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        
        // space wla full pyramid
        for(int j=0; j<2*n-2*i-1; j++){
            cout<<" ";
        }

        // half pyramid
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}