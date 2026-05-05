// // One way: Brute Force
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     // 1st half ke liye
//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     // 2nd half ke liye
//         for(int row=n-1; row>0; row--){
//             for(int col=0; col<row; col++){
//                 cout<<"* ";
//             }
//             cout<<endl;
//         }
//     return 0;
// }


// Another way: Optimized Approach
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int row=0; row < 2*n-1; row++) {
    int totalStars;
    
    if(row < n) {
        totalStars = row + 1; // Growing phase
    } else {
        totalStars = 2*n - row - 1; // Shrinking phase
    }

    for(int col=0; col < totalStars; col++) {
        cout << "* ";
    }
    cout << endl;
}
    return 0;
}
