#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
void print_sorted(string input){
      // Ascending order
    sort(input.begin(), input.end());
    cout << "Ascending Order: " << input << endl;

    // Descending order
    sort(input.rbegin(), input.rend());
    cout << "Descending Order: " << input << endl;
}
int main() {
    string input, first, second, third, fourth;
    cout<<"enter a word with four char :";
    cin >> input;

    print_sorted(input);
  
   


    return 0;
}
