#include "func.h"


extern a;
void func1()
{
	a += 1;
	printf("func1() 함수를 실행합니다. \n");
	printf("main함수 변수 a에 1을 더하면 %d. \n",a);
}