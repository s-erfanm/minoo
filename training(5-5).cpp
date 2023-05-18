#include <iostream>
using namespace std;
void check_number(float input){
          if (input >= 18 && input <= 20) {
          cout << "Excellent" << endl;
        } else if (input >= 12 && input < 18) {
          cout << "Good" << endl;
        } else {
          cout << "Ridi golam" << endl;
        }
}
int main() {
  int counter= 0, sum = 0 ;
  float value[50], input ;
  while (true){
  cout<<"enter your grade( negative number for quit)\t:";
  cin >> input;
    
    if (input >= 0 && input <= 20){
      check_number(input);
      sum += input;
      value[counter] = input;
      counter ++;

    } else if (input < 0 ){
      cout<< "\nyou entered : "<<counter<<" grade";
      cout<<"\nyour avrage number is :"<< (sum / counter)<<endl;
      break;
      
    }else{
      cout<<"your grade is out of range ! ";
    }
  }

    return 0;
}