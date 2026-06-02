#include <iostream>
#include <string>
using namespace std;


int main(){
    string str = "This is my first message";
    string word = "Hello";

    // 0th index se start krke 4 character htane hai aur unki jgh word ki value dalni hai
    str.replace(0,4, word);
    cout<<str<<endl;
    
    // 2. Erase
    string a = "ABCDEFGHIJKLMOPQ";
    // 0 index se 4 character erase kro
    a.erase(0,4);
    cout<<a<<endl;
    return 0;
}