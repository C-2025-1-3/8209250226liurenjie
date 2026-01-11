#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int size1 = (int)strlen(s1), size2 = (int)strlen(s2);
	int i, j, k, l, sum;
	for (i = 0; i < size2 - size1; i++) {
		sum = 0;
		for (l = 0; l < size1; l++) {
			if (s1[l] != s2[i + l]) {
				sum = 1;
				break;
			}
		}
		if (sum == 0) return i;
	}
	return -1;
}
	
	int main(){
	char s1[100], s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	cout << indexOf(s1,s2);
	return 0;
}