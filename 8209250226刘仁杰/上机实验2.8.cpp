#include<iostream>
using namespace std;
int main()
{
	float a,c,b=(1/2)(c+1);
	cin >> a;
	for (c=a; (c - b) >= 1.000000e-5 || (c - b) <= -1.000000e-5; b= (1 / 2)(c+ a / c))
	{
		c= (1 / 2)(b+ a / b);
	}
	cout << "Xn=" << b<< endl;
	return 0;

}