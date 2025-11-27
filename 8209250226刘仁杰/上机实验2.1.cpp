#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') { ch = ch - ('a' - 'A'); cout << ch << endl; }
	else{ch = ch + 1; cout << int(ch) << endl; };
	return 0;

}