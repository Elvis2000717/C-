#include <stdio.h>

struct A {
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

int main()
{
	struct A s = { 0 };
	s._a = 3;
	s._b = 3;
	s._c = 3;
	s._d = 30;
	printf("%d\n", sizeof(struct A));
	return 0;
}