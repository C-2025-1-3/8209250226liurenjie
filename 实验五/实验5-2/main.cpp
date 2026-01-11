#include<iostream>
#include"student.h"
using namespace std;
int main() {
	Student stud;
	stud.set_value(1, "abc", 'f');
	stud.display();
	cout << endl;
	Student stud1(7, "tcg", 'm');
	stud1.display();
	return 0;
}