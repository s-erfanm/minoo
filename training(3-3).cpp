#include <iostream>
#include <string>
using namespace std;



string assigning(string inputed_string){
  int position = inputed_string.find("*");
  string new_string;
  new_string.assign(inputed_string, 0, position);
  return new_string;
}


int main()
{
  string input, first, second, third, furth;
  cout<<"enter 4 word seperated by (*) : ";
  getline(cin, input);


  
  first = assigning(input);
  input.erase(0,input.find("*")+ 1);

  second = assigning(input);
  input.erase(0,input.find("*")+ 1);

  third = assigning(input);
  input.erase(0,input.find("*")+ 1);

  furth = assigning(input);
  input.erase(0,input.length());


  string reverse_str = furth + third + second + first;
  cout<<reverse_str;

  
  return 0;
  
}
