//1. taking entire input
// #include<iostream>
// using namespace std;

// int main(){
//     char name[25];
//     cout<<"Enter your name: "<<endl;
//     cin>>name;
//     cout<<"Your name is "<<name<<endl;
//     return 0;
// }


// 2. taking single character
// #include<iostream>
// using namespace std;

// int main(){
//     char ch[25];
//     ch[0] = 'a';
//     ch[1] = 'b';

//     cout<<ch[0]<<" "<<ch[1]<<endl;
//     return 0;
// }


// 3. giving full name in output using getline
#include<iostream>
#include<string>
using namespace std;

int main(){
    char name[25];
    cout<<"Enter your name: "<<endl;
    // getline to store full name with space
    // 20 is max length you want to store is jgh aap 25 22 etc kuch bhi de skte ho
    cin.getline(name,20);
    cout<<"Your name is "<<name<<endl;
}