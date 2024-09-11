#include <iostream>

using namespace std;

int main()
{
    double inTemperature;
    double outTemperature;

    cout << "화씨온도: ";
    cin >> inTemperature;

    outTemperature = (5.0 / 9.0) * (inTemperature - 32);
    cout << "섭씨온도 = " << outTemperature << endl;


}