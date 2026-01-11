#include<iostream>
using namespace std;
int main() {
	double list[10];
	int i;
	for (i = 0; i < 10; i++) {
		double x;
		cin >> x;
		list[i] = x;
	}
	int listSize = 10;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1;j++)
			if (list[j] > list[j + 1])
			{
				double a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
	} while (changed);
	for (i = 0; i < 10; i++) {
		cout<<list[i]<<"  ";
	}
	return 0;
}