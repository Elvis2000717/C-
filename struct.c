#include <stdio.h>
struct Student
{
	char name[20];
	int age;
};

int main()
{
	struct Student s1 = { "张三", 18 };
	struct Student s2 = { "张三", 18 };
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);

	int i = 10;
	int* p1 = &i;
	*p1 = 20;

	struct Student* p2 = &s2;
	printf("%s\n", (*p2).name);
	printf("%d\n", (*p2).age);


	return 0;
}