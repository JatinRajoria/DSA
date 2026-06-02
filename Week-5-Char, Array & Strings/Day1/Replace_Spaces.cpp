// Replace all spaces with @
// example you have My Name is Jatin
// in place of space -> My@Name@is@Jatin

#include<iostream>
#include<cstring>
using namespace std;

void replaceSpcaces(char sentence[]){
    int i = 0;
    int n = strlen(sentence);
    for(int i=0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}

int main(){
    char sentence[50];
    cin.getline(sentence, 48);

    replaceSpcaces(sentence);
    cout<<"Printing Sentence: "<<sentence<<endl;
}