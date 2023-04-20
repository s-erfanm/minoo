#include <iostream>
#include <cmath>
float PI = 3.14159265;
using namespace std;

double gosper(int n) {
  
  double first_answer = 2*n + (1.0/3)* PI;
  double second_answer = sqrt(first_answer * PI);
  return second_answer;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    double result = gosper(n);
    cout << "The " << n << "th term of the sequence is: " << result << endl;
    return 0;
}