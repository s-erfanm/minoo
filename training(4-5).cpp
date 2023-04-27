#include <iostream>

using namespace std;

int main() {
    float weight, height, bmi;

    // Get weight and height from user
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate the BMI
    bmi = weight / (height * height);

    // Determine weight status based on BMI
    if (bmi < 18.5) {
        cout<<"Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout<<"Normal weight";
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout<<"Overweight";
    } else {
        cout<<"Obese";
    }




    return 0;
}