
#include <iostream>
using namespace std;
int do_gcd(int first , int second){
  int remaining = second ;
  while (remaining <= 1 ){
    remaining = first % second ;
    
    if (remaining == 0){
      cout<<"ocd is : "<<second<<endl; 
      break;
    }else if (remaining==1){
      cout<<"your number dont have any answer"<<endl;
      break;
    }else{
    do_gcd(second, remaining);
    }
  }
}

int main() {
    int num1, num2, gcd;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    bool answer;
  
    answer = do_gcd(num1,num2);
    // if (answer!= true) 
    //   cout<<"your number dont have any answer !";
    
    return 0;
}