#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op;
	cout << "请输入计算式(两个数字):" << endl;
	cin >> a >> op >> b;
	switch (op)
	{
	case'+':cout << '=' << a + b << endl;
		break;
	case'-':cout << '=' << a - b << endl;
		break;
	case'*':cout << '=' << a * b << endl;
		break;
	case'/':if (b == 0)
		cout << "除数不能为零！" << endl;
		   else cout << '=' << a / b << endl;
		break;
	case'%':if (b == 0)
		cout << "除数不能为零！" << endl;
		   else cout << '=' << int(a) % int(b) << endl;
		break;
	default:cout << "运算符错误！" << endl;
	}
		return 0;
}