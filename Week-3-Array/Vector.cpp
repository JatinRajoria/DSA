#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 1. Create vector
    // vector <int> arr;
    // int ans = sizeof(arr)/sizeof(int);
    // cout<<ans<<endl;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // // insert
    // arr.push_back(1);
    // arr.push_back(2);

    // // print
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // remove or delete
    // arr.pop_back();

    // // print
    //     for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // 2. Another way to create vector (storing 2 in all arr elements)
    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;
    // vector <int> arr(n,2); //isme har jgh 2 store ho jayega jitne bhi element loge
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // 3.Another way to create vector
    // vector <int> arr{10,20,30};
    //    for(int i=0; i<arr.size(); i++){
    //         cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // 4. isme har value pr -101 print ho jayega essa krne se
    // vector <int> brr(10, -101);
    // cout<< "size of brr "<< brr.size() << endl;
    // cout<< "capacity of brr " << brr.capacity() << endl;
    // for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;


    // check vector is empty or not using .empty()
    vector <int> drr;
    cout<<"check vector is empty or not "<< drr.empty() <<endl;
    return 0;
}