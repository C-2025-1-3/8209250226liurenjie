#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int letter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	char c;
	while ((c = cin.get()) != '\n')
	{
		if (isalpha(c)) {
			++letter;
		}
		else if (c == ' ') {
			++space;
		}
		else if (isdigit(c)) {
			++digit;
		}
		else {
			++other;
		}
	}
	cout << "letters:" << letter << endl;
	cout << "spaces:" << space << endl;
	cout << "digits:" << digit << endl;
	cout << "others:" << other << endl;
	return 0;
}
