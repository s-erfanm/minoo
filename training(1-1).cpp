#include <iostream>
using namespace std;

// This program receives a number in Fahrenheit and prints it in Celsius
int main() {
  int fahrenheit;
  double celsius;
  cout<<"enter fahrenheit degree : ";
  cin >> fahrenheit;
  celsius = (float(fahrenheit) - 32) * 5/9;
  cout<<"celsius degree is : "<< celsius << "\n"; 
  return 0;
}
