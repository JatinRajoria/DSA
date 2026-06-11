#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;

  string s="Hello Hello Hello 1234567890123456 1111111111 " ;
  cout<<s<<endl;
  cout<<s[1]<<endl;

  string s1 = "hello world How are you ";
  cout<<s1<<endl;
  cout<<s1[1]<<" "<<s1[10]<<" "<<endl;

  s1.push_back('?');
  cout<<s1<<endl;
  s1.pop_back();
  cout<<s1<<endl;


  for(int i=0 ; i<s.size(); i++){
    cout<<s[i];

  }
  cout<<endl;

  // string s2 = ["what","are"]; //error
  // string s3[24] = "hi"; //error
  


  cout<<s.size()<<endl; // actual size 
  cout<<s.length()<<endl;// actual length
  cout<<s.capacity()<<endl;// backend mei kitna storage allocated hai 
  cout<<sizeof(s)<<endl; // 32 ya 24 constant always and depends on compiler 

  cout<<s1.size()<<endl;
  cout<<s1.capacity()<<endl; // don't focus on it  ignore 

  cout<<s1.empty()<<endl; 



  return 0;
}