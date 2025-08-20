#include<stdio.h>
#include<stddef.h>

struct Student{
	int id;
	char name[50];
	float grade;
};

int main(){
	printf("Offset of id: %zu bytes\n", offsetof(struct Student, id));
	printf("Offset of name: %zu bytes\n", offsetof(struct Student, name));
	printf("Offset of grade: %zu bytes\n", offsetof(struct Student, grade));

	return 0;
}
