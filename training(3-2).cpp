#include <iostream>
#include <cmath>
using namespace std;


void seperate(float full_num){
  int integerPart = floor(full_num);
  float decimalPart = full_num - integerPart;
  cout<<"\ninteger part :"<<integerPart;
  cout<<"\ndecimal part :"<<decimalPart;
}

int main() {
  float avg;
  cout<<"enter your school average: ";
  cin>>avg;
  seperate(avg);
    return 0;
}
