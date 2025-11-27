#include<iostream>
using namespace std;
int min(int a, int b)
{
	return  a < b ? a : b;
}
int max(int a, int b)
{
	return  a > b ? a : b;
}
int main()
{
	int a, b,c;
	cin >> a >> b;
	for (c = min(a,b); a % c != 0 || b % c != 0; c--)
	{
		c = c;
	}
	cout << "最大公约数为：" << c << endl;
	for (c = max(a, b); c >= min(a, b); c++)
	{
		if (c % a == 0 && c % b == 0) {
			cout << "最小公倍数为：" << c << endl;
			break;
		}
	}
	return 0;
}