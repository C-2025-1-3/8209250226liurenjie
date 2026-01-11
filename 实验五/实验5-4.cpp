#include<iostream>
using namespace std;
class Student {
private:
	int id, score;
public:
	Student() {
		id = 0;
		score = 0;
	}
	Student(int a, int b) {
		id = a;
		score = b;
	}
	int getid() const{
		return id;
	}
	int getscore()const {
		return score;
	}
};
Student* maxstudent(Student* p, int n) {
	Student* max = p;
	for (int i = 1; i < n; i++) {
		(p + i)->getscore() > max->getscore() ? max = p + i : max = max;
	}
	return max;
}
int main() {
	Student arr[5];
	cout << "请输入5个学生的学号和成绩：" << endl;
	for (int i = 0; i < 5; i++) {
		int a, b;
		cin >> a >> b;
		arr[i]=Student(a, b);
	}
	Student* best=maxstudent(arr, 5);
	cout << "成绩最高学生学号为：" << best->getid() << ",成绩为：" << best->getscore() << endl;
	return 0;
}