#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;
Student::Student() {
	num = 0;
	name[0] = '\0';
	sex = ' ';

}
Student::Student(int num, const char* name, char sex) {
	this->num = num;
	this->name[19] = '\0';
	this->sex = sex;
}
void Student::set_value(int num, const char* name, char sex) {
	this->num = num;
	this->name[19] = '\0';
	this->sex = sex;
}
void Student::display(){
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;

}