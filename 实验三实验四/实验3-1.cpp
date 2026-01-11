#include<iostream>
using namespace std;
int gcd(int a,int b){
	int i;
	if (a != 0 && b != 0)for (i = a; b % i != 0 || a % i != 0; i--) {
		i = i;
	}
	else return 0;
	return i;
	
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	cout << lcm(m, n) << endl;
	return 0;
}
