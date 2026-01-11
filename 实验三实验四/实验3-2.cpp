#include<iostream>
using namespace std;
bool is_prime(int num);
int main() {
	int i ,sum=0;
	for (i = 1; sum<201; i++) {
		if (is_prime(i) == 1) {
			cout << i<<"  ";
			sum = sum + 1;
			if (sum % 10 == 0) cout << endl;
		}
	}
	return 0;
}
bool is_prime(int num) {
	int a;
	if (num < 4) return 1;
	else {
		for (a = 2; a < num; a++) {
			if (num % a == 0) return 0;
		}
		return 1;
	}

}