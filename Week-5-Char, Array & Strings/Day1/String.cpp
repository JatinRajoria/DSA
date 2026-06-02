#include <iostream>
#include <string>
using namespace std;

int main(){
    // string create
    string str;
    // input 
    cin>>str;
    // getline(cin, str);
    // print 
    cout<<str;

    cout<<"Length is: "<<str.length()<<endl;
    cout<<"String is Empty: "<<str.empty()<<endl;

    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl; 

    // 0 index se start krke 6 length ki string lake do
    cout<<str.substr(0,6)<<endl;

    // compare
    string a = "You";
    string b = "You";

    if(a.compare(b) == 0){
        cout<<"A and B are excatly same strings."<<endl;
    }
    else{
        cout<<"A and B are not same"<<endl;
    }

    // find
    string sentence = "Hello how are you";
    string target = "how";

    cout<<sentence.find(target); 
    return 0;
}