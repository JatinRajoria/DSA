// Find a pair that upon addition gives value equal to sum.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr{10,20,30,40,50,60,70};
    int sum=80;

    // print all paris
    // outer loop will traverse for each element
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        // for every element will traverse on aage wla element
        for(int j=i+1; j<arr.size(); j++){
            if(element + arr[j] == sum){
                cout<<"Pair Found" << element << ", " << arr[j] <<endl;
            }
        }
    }
    return 0;
}