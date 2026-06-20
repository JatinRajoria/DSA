// Print Counting using recursion
#include <iostream>
using namespace std;

// Function to print counting from n to 1
void printCounting(int n){
    // Base Case
    // Jab n 0 ho jaye toh recursion stop kar do
    if(n == 0){

        return;
    }

    // Processing
    // Current value print karo
    cout << n << " ";

    // Recursive Relation
    // Choti problem solve karne ke liye
    // function ko n-1 ke saath call karo
    printCounting(n - 1);
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // Function Call
    printCounting(n);
    cout << endl;
    return 0;
}