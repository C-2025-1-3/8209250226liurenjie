#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三边长：";
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "不能构成三角形！" << endl;
	}
	else {
		cout << a + b + c << endl; if (a == b || b == c || a == c) cout << "等腰三角形" << endl;
	}
	return 0;
}
	
