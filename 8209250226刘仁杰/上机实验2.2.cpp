#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "Please input x:";
	cin >> x;
	if (x > 0 && x < 1) { y = 3.0 - 2.0 * x; cout << "y=" << y; }
	else if (x >= 1 && x < 5) { y = 2.0 /( 4.0 * x )+ 1.0; cout << "y=" << y; }
	else { y = x * x; cout << "y=" << y; }
	return 0;
}
