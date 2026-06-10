// 1. 
// #include <iostream>
// using namespace std;

// int main() {
//   int a = 5;
//   int* p = &a;

//   int** q = &p;

//   cout<<a<<endl;
//   cout<<&a<<endl;
//   cout<<p<<endl;
//   cout<<&p<<endl;
//   cout<<*p<<endl;
//   cout<<q<<endl;
//   cout<<&q<<endl;
//   cout<<*q<<endl;
//   cout<<**q<<endl;
//   return 0;
// }


// 2.
// #include <iostream>
// using namespace std;

// void util(int* p){
// //   p = p + 1;
//   *p = *p + 1;
// }

// int main() {
//   int a = 5;
//   int* p = &a;

//   util(p);

//   cout<<a<<endl;
//   return 0;
// }



// 3.
// #include <iostream>
// using namespace std;

// void solve(int** ptr){
//   //  ptr = ptr + 1;
//   //  *ptr = *ptr + 1;
//    **ptr = **ptr + 1;
// }

// int main() {
//   int x = 12;
//   int* p = &x;
//   int** q = &p;

//   solve(q);

//   cout<<x<<endl;
//   return 0;
// }