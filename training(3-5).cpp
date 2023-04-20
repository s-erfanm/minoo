#include <iostream>
using namespace std;

void make_volume(int x, int y, int z){
  cout<<"\npacket volume is :"<< x * y * z<<"cm3";
}

void make_surface(int x, int y, int z){
  cout<<"\nsurface area is : " << (x + y) * z<<"cm3";
}

int main(){
  int length, width, height;
  cout<<"enter Length :";
  cin>> length;
  cout<<"enter width :";
  cin>> width;
  cout<<"enter height :";
  cin>> height;
  make_volume (length, width, height);
  make_surface(length, width, height);
  return 0;
}