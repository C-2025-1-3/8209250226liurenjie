#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	int i, j;
	cin >> i >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}