#include <stdio.h>
#include <stdlib.h>

struct Student{
	char name[20];
	int age;
	double gpa;
};

int main(){
	struct Student student1;
	strcpy(student1.name, "Matheus");
	student1.age = 23;
	student1.gpa = 4.7;

	printf("Student1 is called %s, he's %i years old and has the GPA of %.2f \n", student1.name, student1.age, student1.gpa);

	return 0;
}
