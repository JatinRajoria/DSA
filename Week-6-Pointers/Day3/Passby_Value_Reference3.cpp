// 1. Pass by Value
// isme function me toh value update hogi lekin nich vo int a ki value lega
// value updation sirf function tak hi simit hai isme   

// #include <iostream>
// using namespace std;

// void solve(int num){
//    num++;
// }

// int main(){
//   int a = 5;

//   solve(a);

//   cout<<a<<endl;
//   return 0;
// }



// 2. Pass by Reference
// isme value update hoti hai
#include <iostream>
using namespace std;

void solve(int& num){
   num++;
}

int main(){
  int a = 5;

  solve(a);

  cout<<a<<endl;
  return 0;
}