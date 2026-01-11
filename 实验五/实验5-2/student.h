#ifndef STUDENT_H
#define STUDENT_H
class Student
{
public:
	Student();
	Student(int num, const char* name, char sex);
	void set_value(int num, const char* name, char sex);
	void display();
private:
	int num;
	char name[20];
	char sex;
};
#endif