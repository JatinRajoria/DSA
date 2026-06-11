#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  // char ch = "hello"; // array nahi banaya isliye 
  // cout<<ch<<endl; 

  char ch0 = 'h';
  cout<<ch0<<endl; 

  char ch1[50] = "chakshit";

  cout<<ch1<<endl;

  ch1[0] = 'j';
  cout<<ch1<<endl;

  // ch1[0] = "chintu"; // error aaega 
  // ch1 = "chintu";  // error aaega 
  cout<<ch1<<endl;

  char ch2[50] = "jatin  rajoria \n hi ";
  cout<<ch2<<endl;

  for(int i =0; ch1[i]!='\0'; i++){
    cout<<ch1[i] <<" ";
  }
  cout<<endl; 
  cout<<"iam"<<endl;

  char ch3[4][40] = {"chintu", "saini", "jatin","rajoria"};
  cout<<ch3[0]<<endl;
  cout<<ch3[1]<<endl;

  cout<<ch3[1][3]<<endl;

  for(int i = 0; i<4; i++){
    for(int j =0; ch3[i][j]!='\0'; j++){
      cout<<ch3[i][j];
    }
    cout<<endl; 
  }


  
  return 0;
}