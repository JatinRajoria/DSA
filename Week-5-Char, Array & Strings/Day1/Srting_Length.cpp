// Find the length of the string
#include<iostream>
#include<cstring>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;
    // jab tak name[i] null character ke equal nhi hota
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    char name[25];
    cin.getline(name, 22);
    cout<<"Length is "<<getLength(name)<<endl;
    cout<<"Length is "<<strlen(name)<<endl;
    return 0;
}