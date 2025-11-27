#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	double r, h;
	cout << "please input r and h:" << endl;
	cin >> r >> h;
	cout << "volume=" << 0.33 * PI * r * r * h << endl;
	return 0;
}

