#include <iostream>
using namespace std;

// config part
const int OVER_TIME_LIMIT = 40;
const float OVER_TIME_RATE = 1.5;
const double TAX_LIMIT = 1000000;
const double TAX_RATE = 1500000;


// functions part
double gross_pay(float hours, float rate){
  double wage = hours * rate;
  if (hours > OVER_TIME_LIMIT){
    int over_time_hour = hours - OVER_TIME_LIMIT;
    float over_time_pay = over_time_hour * rate * OVER_TIME_RATE;
    wage += over_time_pay;
  }  return wage;
}


double net_pay(long int wage){
  if (wage > TAX_LIMIT)
    wage -= TAX_RATE ;  
  
    return wage;
}


// main program
int main(){
  //input stuff
  double hours, rate;
  cout<<"enter hours of work in this week:"<<endl;
  cin>>hours;
  cout<<"enter rate per hour :"<<endl;
  cin>>rate;
  // gross_pay
  long int wage = gross_pay(hours, rate);
  cout<<"your gross pay + overwork rate  : "<<wage<<endl;
  
  long int net_pay_wage = net_pay(wage);
  cout<<"your net pay + tax rate :" << net_pay_wage;
  return 0;
}