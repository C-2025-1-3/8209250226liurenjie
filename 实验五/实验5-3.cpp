#include<iostream>
using namespace std;
class V {
private:
	double x, y, z;
public:
	double volumn(double x, double y, double z) {
		return x * y * z;
	}
	V(double x, double y, double z);
};
V::V(double x, double y, double z) {
	this->x = 1.0;
	this->y = 1.0;
	this->z = 1.0;
}
int main() {
	for (int i = 0; i < 3; i++) {
		double x, y, z;
		cin >> x >> y >> z;
		V v(x, y, z);
		cout << v.volumn(x,y,z) << endl;
	}
	return 0;

}