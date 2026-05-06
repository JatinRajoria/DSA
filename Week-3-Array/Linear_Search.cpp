#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    if(size==0){
        return -1; // Return -1 if the array is em
    }
    for(int i=0; i<size; i++){
        if(arr[i]==key)
            return true;
    }
    return false;
}

int main(){
    int arr[] = {1,3,5,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the key to find: "<<endl;
    int key;
    cin>>key;
    int result = find(arr, size, key);
    if(result)
    cout<<"Element is present in array";
    else
    cout<<"Element is not present in array";

    return 0;
}