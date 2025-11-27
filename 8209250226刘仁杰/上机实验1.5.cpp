#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double Fahrenheit, Celsius;
	cout << "Please enter the temperature in Fahrenheut:";
	cin >> Fahrenheit;
	cout <<fixed<<setprecision(2)<< "The temperature in Celsius is" << (Fahrenheit - 32.0) / 1.8 << endl;
	return 0;
}