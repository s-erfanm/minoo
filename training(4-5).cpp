#include <iostream>

using namespace std;

float bmi_compute(float height, float weight){
    return weight / (height * height);
}

int main() {
    float weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate the BMI
    bmi = bmi_compute(height,weight);

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
