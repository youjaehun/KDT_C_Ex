#include <stdio.h>
int a = 100;
int func1()
{
	int a = 200;
	printf("func1()���� a�� ��==> %d\n", a);
	return a;
}
void main()
{
	a = func1();
	printf("main() ���� a�� ��==> %d\n", a);
}

