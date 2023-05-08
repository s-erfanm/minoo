#include <iostream>
using namespace std;
int main() {
  float n, min, max=0, avg=0;
  while(true) {
    cout << "Enter a float number: (negative for quit) : ";
    cin >> n;
    if (n < 0)
      break;
    if ( n > max)
      max = n ;
    
    min = n;
    if (n < min)
      min = n ;

    avg = (avg + n) / 2;
    
  }
  cout<<"avrage is : "<<avg<<"\n max is : "<<max<<"\n min is : "<<min;
  
  return 0;
}