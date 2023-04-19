#include <iostream>
using namespace std;
int main() {
  int age, month;
  cout<<"enter your age :";
  cin>>age;
  
  month = age * 12 ;
  
  cout<<"\nyour age's month is :"<< month;
  cout<<"\nyour age's days is  :"<< month * 365;
    

  return 0;
}