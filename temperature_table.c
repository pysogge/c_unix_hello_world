#include <stdio.h>

// Print Farhenheig-Celsius Table
// For Farh = 0, 15, ..., 300;
// or = lower, step, ..., upper;
// Using Floating Point

int main()
{
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 230;
    step = 15;

    // automatic type conversion from int to float
    fahrenheit = lower;

    // print table header
    printf("%3s\t%6s\n", "F", "C");   

    while(fahrenheit <= upper)
    {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

}