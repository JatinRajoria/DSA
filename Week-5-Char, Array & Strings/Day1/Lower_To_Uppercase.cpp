// Lower to Uppercase
// Lower case -> "babbar"
//  Upper case -> "BABBAR"
//  logic -> 'a' -> 97 ASCII value -> 'a' - 'a' + 'A' (for lower to uppercase) formula (- 'a' + 'A')
// 'a' -> 97  -> 'a'  - 'A' + 'a' (for upper to lowercase ) formula (- 'A' + 'a)
#include<iostream>
#include<cstring>
using namespace std;

void convertIntoUpperCase(char arr[]){
    int n = strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main(){
    char arr[25] = "jatin";
    convertIntoUpperCase(arr);
    cout<<"Upper Case is: "<<arr<<endl;
}