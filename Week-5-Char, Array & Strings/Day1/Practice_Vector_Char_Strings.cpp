#include <iostream>
#include<vector>
using namespace std;

int main() {
  cout << "Hello world!" << endl;

  // create 
  vector<char> ch;
  //store
  ch.push_back('c');
  ch.push_back('h');
  ch.push_back('a');
  ch.push_back('k');
  ch.push_back('s');
  ch.push_back('h');
  // ch.push_back("ak");// ek hi character andar jaaega push_back mei isliye

  // ch[0]="hi";// ese  update nahi kr skte ek character hai ilsiye
  // ch = "hi"; // same here nahi kr skte ese bhi 
  //update
  ch[2] = 'i'; // ese hoskta hai  

  // cout<<ch<<endl; // ese error dega 
  //access ya traverse 
  for(int i =0 ; i<ch.size(); i++){
    cout<<ch[i]<<" ";
  }

  cout<<endl;

  cout<<ch[0]<< endl;

  ch.insert(ch.begin() + 1, 'b'); // insert krta hai yh bhich mei kahi bhi jahan bolege replace nahi krta yh 

 for(int i =0 ; i<ch.size(); i++){
    cout<<ch[i]<<" ";
  }
cout<<endl;
  ch.erase(ch.begin()+1);
  // ch.clear();// clear krti hai
   for(int i =0 ; i<ch.size(); i++){
    cout<<ch[i]<<" ";
  }
  cout<<endl;


  // string 
  vector<string> str; 
  str.push_back("chakshit");
  str.push_back("jatin");
  str.push_back("hello");
  str.push_back("how");
  // str.push_back('1'); // string hai toh character nahi daal skte hai single quote mei
  str.push_back("1");

  str[3] = "Yellow";
  // cout<<str<<endl;// ese nahi ho skta hai kyu ki yh array hai 
  for(auto st: str){
    cout<<st<<" ";
  }
  cout<<endl;

  str.insert(str.begin()+1,"gunidia");
    for(auto st: str){
    cout<<st<<" ";
  }
  cout<<endl;

  for(auto st: str){
    for(int i=0; i<st.size(); i++){
      cout<<st[i]<<" ";
    }
    cout<< "   "<<endl;
  }

  // str[3][4]="i"; // ese nahi hoskta 
  str[3][4]='i';  // ese hoskta hai 
  cout<<str[3]<<endl;

  return 0;
}