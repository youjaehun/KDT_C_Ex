#include <stdio.h>

/*
void main(){

	printf("안녕");

}
*/

/*
void main(){
	int a;
	float b;

	a = 123.232;
	b = 200;

	printf("%d\n", a);
	printf("%f\n", b);

	printf("%d", sizeof(int));
	printf("%d", sizeof(float));
	printf("%d", sizeof(double));
}
*/

void main()
{
	int a, b, c, d; //변수 선언
	a = 100 + 100;
	b = a + 100;
	c = a + b - 100;
	d = a + b + c;

	printf("a, b , c , d 의 값 ==> %d , %d , %d , %d \n", a, b, c, d);
	
	a = b = c = d = 100; //a, b, c, d에 모두 100 입력
	printf("a, b , c , d 의 값 ==> %d , %d , %d , %d \n", a, b, c, d);
	
	a = 100;
	a = a + 200; //a에 a 자신과 200의 합을 대입
	printf("a 의 값 ==> %d \n", a);
}
