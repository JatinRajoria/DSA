// Palindrome example Naman, racecar, etc (jo start se ya end se read krne se same mtlb nikale)
#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char word[]){
    int i = 0;
    int n = strlen(word);
    int j = n-1;

    while(i<=j){
        if(word[i] != word[j]){
            return false;
        }

        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    char word[25];
    cin.getline(word, 22);
    cout<<"Palindrome check: "<<checkPalindrome(word);

    return 0;
}