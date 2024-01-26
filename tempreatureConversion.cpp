#include <iostream>
#include <conio.h>
using namespace std;
void cto(float *kc, float *fcf, float inputTemp, int n)
{
    if (n == 1)
    {
        *kc = inputTemp + 273.15;
        *fcf = (9 * inputTemp) / 5 + 32;
    }
    if (n == 2)
    {
        *kc = 5 * (inputTemp - 32) / 9 + 273.15;
        *fcf = 5 * (inputTemp - 32) / 9;
    }
    if (n == 3)
    {
        *kc = inputTemp - 273.15;
        *fcf = 9 * (inputTemp - 273.15) / 5 + 32;
    }
}
int main()
{
    cout << "1.Celsius Scale\n2.Fahrenheit Scale\n3.Kelvin Scale\n";
    cout << "Enter the temperature value to convert: ";
    int n;
    cin >> n;
    if (n < 1 || n > 3)
    {
        cout << "Invalid Input ";
    }
    else
    {
        if (n == 1)
        {
            float inputTemp, kScale, fScale;
            float *ks = &kScale, *fs = &fScale;
            cout << "Enter your input in degree-celsius scale: ";
            cin >> inputTemp;
            cto(ks, fs, inputTemp, n);
            cout << "Fahrenheit Scale = " << fScale << " F" << endl;
            cout << "Kelvin Scale = " << kScale << " K" << endl;
        }
        if (n == 2)
        {
            float inputTemp, cScale, kScale;
            float *ks = &kScale, *cs = &cScale;
            cout << "Enter your input in fahrenheit scale: ";
            cin >> inputTemp;
            cto(ks, cs, inputTemp, n);
            cout << "Celsius Scale = " << cScale << " C" << endl;
            cout << "Kelvin Scale = " << kScale << " K";
        }
        if (n == 3)
        {
            float inputTemp, cScale, fScale;
            float *fs = &fScale, *cs = &cScale;
            cout << "Enter your input in kelvin scale: ";
            cin >> inputTemp;
            cto(cs, fs, inputTemp, n);
            cout << "Celsius Scale = " << cScale << " C" << endl;
            cout << "Fahrenheit Scale = " << fScale << " F";
        }
    }
    getch();
    return 0;
}