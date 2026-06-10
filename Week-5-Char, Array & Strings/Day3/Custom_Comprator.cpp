// Custom Comprator
// to comare a string or array 
// in lexographical order

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(char first, char second){
    return first > second;
}

bool compare(int first, int second){
    return first > second;
}

int main(){
    string s = "babbar";
    sort(s.begin(), s.end(), cmp);
    cout<<s<<endl;

    vector<int> v{5,3,1,2,4};
    sort(v.begin(), v.end(), compare);
    for(auto i:v){
        cout << i << " ";
    }
    cout<<endl;
}