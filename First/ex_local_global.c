#include <stdio.h>
int a = 100;
int func1()
{
	int a = 200;
	printf("func1()에서 a의 값==> %d\n", a);
	return a;
}
void main()
{
	a = func1();
	printf("main() 에서 a의 값==> %d\n", a);
}

