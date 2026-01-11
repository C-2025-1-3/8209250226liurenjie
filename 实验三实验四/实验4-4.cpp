#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) list3[k++] = list1[i++];
		else list3[k++] = list2[j++];
	}
	while(i < size1)list3[k++] = list1[i++];
	while(j< size2)list3[k++] = list2[j++];
}
int main() {
	int size1;
	cin >> size1;
	int list1[80];
	for (int i = 0; i < size1 && i < 80; i++) {
		cin >> list1[i];
	}
	int size2;
	cin >> size2;
	int list2[80];
	for (int i = 0; i < size2 && i < 80; i++) {
		cin >> list2[i];
	}
	int list3[160];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < 160 && i < size1 + size2; i++) {
		cout << list3[i] << "  ";
	}
	cout << endl;
	return 0;
}
