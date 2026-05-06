#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    cout<<"*"<<endl;
    for(int i =0; i<n; i++){
        int cond = i<=n/2 ? 2*i : 2*(n-i-1);
        cout<<"*";
        for(int j=0; j<=cond; j++){
            if(j<=cond/2){
                cout<<j+1;
            }
            else{
                cout<<cond-j+1;
            }
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<"*";
}