// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include "PPPheaders.h"


int main(){
    double weight_lb = 0.;
    double height_in = 0.;

    double weight_kg = 0.;
    double height_m  = 0.;
    double BMI = 0.;

cout << "\nEnter weight in pounds: ";
cin >> weight_lb;

cout << "\nEnter height in inches: ";
cin >> height_in;

    weight_kg = weight_lb * 0.45359237;
    height_m = height_in * 0.0254;
    BMI = (weight_kg)/(height_m * height_m);

    cout << "\nBMI is " << BMI;
    if (BMI < 18.5)
    {
    cout << "\nUnderweight";
    }
    
    else if (BMI < 24.9)
    {
    cout << "\nNormal";
    }
            
    else if (BMI < 29.9)
    {
    cout << "\nOverweight";
    }
    
    else
    {
    cout << "\nObese";
    }

return 0;
}