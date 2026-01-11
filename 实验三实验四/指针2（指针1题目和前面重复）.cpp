#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0,digit;
	for (int i = 0; hexString[i] != '\0'; i++) {
		char ch = hexString[i];
		if (ch>= '0'&& ch<= '9') {
			 digit= ch-'0';
		}
		else if (ch >= 'a' && ch < 'g')digit = ch - 'a' + 10;
		else if (ch >= 'A' && ch < 'G')digit = ch - 'A' + 10;
		else break;
		result = 16 * result + digit;
	}
	return result;
}
int main() {
	cout << "please input a string of hexadecimal digits:" << endl;
	char hexString[100];
	cin.getline(hexString, 100);
	cout << parseHex(hexString) << endl;
	
	return 0;
}