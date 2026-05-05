#include<iostream>
using namespace std;

int add(int x, int y){
    int result = x+y;
    return result;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int sum = add(a,b);
    cout<<sum<<endl;
    return 0;
}