#include <iostream>

using namespace std;

int main() {
    int temp = 1;
    int num;

    int stop_counter = 0;  
    while (true) {
        cout << "Enter an integer: ";
        cin >> num;
      
        if (num > 0) {
            temp *= num;
            stop_counter = 0;
        }else{ 
            stop_counter++;}
      
        if (stop_counter == 3) 
            break;
        
    }
    
    cout << "Product of positive integers: " << temp << endl;
    
    return 0;
}
