#include <iostream>
using namespace std;

int main() {
  // int a = 5;
  // cout<<a<<endl;
  // // addressof operator
  // cout<<&a<<endl;


// 
  // int b = 15;
  // // pointer create
  // int* ptr = &b; 
  // // access the value ptr is pointing to 
  // // *ptr se dereference kr diya
  // cout<<"Address of B is: "<< &b<< endl;
  // cout<<"Value stored at ptr is: "<<ptr<<endl;
  // cout<<"Value ptr is pointing to: "<<*ptr<<endl;
  // cout<<&b<<endl;


// 
  // int a = 5;
  // int* p = &a;
  // cout<<sizeof(p)<<endl;

  // char ch = 'b';
  // char* c = &ch;
  // cout<<sizeof(c)<<endl;

  // double dtr = 5.03;
  // double* d = &dtr;
  // cout<<sizeof(d)<<endl;


// 
  // Bad practice (segmentation fault) (esse create mt krna)
  // int* ptr;
  // cout<< *ptr << endl;


// 
  // Null Pointer (esse create kr skte ho) -> (traditional way)
  // int* ptr = 0;
  // cout<< *ptr << endl;


// 
  // Null Pointer (esse create kr skte ho) -> (Modern way)
  // int* ptr = nullptr;
  // cout<< *ptr << endl;


// 
  // int a = 5;
  // int* ptr = &a;

  // // copy pointer
  // int* secondptr = ptr;
  // cout<<*ptr<<endl;
  // cout<<*secondptr<<endl;


//
int a = 10;

int* p = &a;
int* q = p;
int* r = q;

cout << a << endl;          // 10

cout << &a << endl;         // address of a

cout << p << endl;          // address of a

cout << &p << endl;         // address of p

cout << *p << endl;         // 10

cout << q << endl;          // address of a

cout << &q << endl;         // address of q

cout << *q << endl;         // 10

cout << r << endl;          // address of a

cout << &r << endl;         // address of r

cout << *r << endl;         // 10

cout << (*p + *q + *r) << endl;     // 30

cout << (*p) * 2 + (*r) * 3 << endl; // 50

cout << (*p / 2) - (*q) / 2 << endl; // 0 
  return 0;
}