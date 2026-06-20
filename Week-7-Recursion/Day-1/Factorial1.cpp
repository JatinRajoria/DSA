// Factorial using recursion 
#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n){

    // Ye batayega ki function kis value ke liye call hua hai
    cout << "Function is called for n: "
         << n << endl;


    // Base Case
    // Jab n = 1 ho jaye toh recursion ko stop kar do
    // 1! = 1
    if(n == 1){

        return 1;
    }


    // Recursive Relation
    // n! = n × (n-1)!
    // Badi problem ka solution
    // choti aur same type ki problem par depend kar raha hai

    int ans = n * factorial(n - 1);

    return ans;
}


int main() {
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;

  int ans = factorial(n);

  cout<<"Answer is: "<<ans<<endl;
  return 0;
}
