#include<iostream>
using namespace std;
int main()
{
	float i = 0.8,a,sum=0,average,b=0;
	for (a = 2; a <= 100; a = 2 * a)
	{
		sum = sum + a * i;
		b = b++;
	}
	average = sum / b;
	cout << "平均每天花费:" << average << "元" << endl;
	return 0;
}