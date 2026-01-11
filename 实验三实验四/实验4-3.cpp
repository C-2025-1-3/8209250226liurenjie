#include<iostream>
using namespace std;
int main() {
	bool L[100];
	for (int i = 0; i < 100; i++) {
		L[i] = false;
	}
	for (int x = 0; x < 99; x++) {
		for (int y = x + 1; y < 100; y = y + x + 1) {
			L[y] = 1 - L[y];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (L[i])cout << i + 1 << " ";
	}
	return 0;
}