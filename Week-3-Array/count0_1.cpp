// Q. Count 0's & 1's in an array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int numZero = 0;
    int numOne = 0;
    
    if(size==0){
        return -1;
    }

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numZero++;
        }
        if(arr[i] == 1){
            numOne++;
        }
    }
    cout<<"Number of Zeroes: "<<numZero<<endl;
    cout<<"Number of Ones: "<<numOne<<endl;
    return 0;
}