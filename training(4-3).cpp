#include <iostream>
#include <cctype>
using namespace std;
int main() {
  char ch ;
  cout<<"enter a char for finding on phone numberpad : ";
  cin>>ch;
  ch = tolower(ch);
  switch(ch) {
    case 'a':
    case 'b':
    case 'c':
      cout << "2" << endl;
      break;
    case 'd':
    case 'e':
    case 'f':
      cout << "3" << endl;
      break;
    case 'g':
    case 'h':
    case 'i':
      cout << "4" << endl;
      break;
    case 'j':
    case 'k':
    case 'l':
      cout << "5" << endl;
    case 'm':
    case 'n':
    case 'o':
      cout << "6" << endl;
      break;
    case 'p':
    case 'q':
    case 'r':
    case 's':
      cout << "7" << endl;
    case 't':
    case 'u':
    case 'v':
      cout << "8" << endl;
      break;
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      cout << "9" << endl;
  default:
    cout<<"this word is not exist"<<endl;
  }
    
  
    return 0;
}