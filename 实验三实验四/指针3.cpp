#include <iostream>
using namespace std;

void sortAsc(int* p, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++) {
            if (p[j] < p[minPos]) minPos = j;
        }
        if (minPos != i) {
            int tmp = p[i];
            p[i] = p[minPos];
            p[minPos] = tmp;
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数 n: ";
    cin >> n;
    int* p = new int[n];
    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }
    sortAsc(p, n);
    cout << "排序后: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << ' ';   
    }
    cout << endl;
    delete[] p;
    return 0;
}