// Reverse Character Array
#include<iostream>
#include<cstring>
using namespace std;

void reverseCharArray(char name[]){
    int i = 0;
     int n = strlen(name);
    // int n = getLength(name);
    int j = n-1;

    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main(){
    char name[25];
    cin.getline(name, 22);
    // cout<<"Length is "<<getLength(name)<<endl;
    // cout<<"Length is "<<strlen(name)<<endl;
    cout<<"Initially: "<<name<<endl;
    reverseCharArray(name);
    cout<<"After reversal process: "<<name<<endl;
    return 0;
}