#include <stdio.h>

/*
void main(){

	printf("�ȳ�");

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
	int a, b, c, d; //���� ����
	a = 100 + 100;
	b = a + 100;
	c = a + b - 100;
	d = a + b + c;

	printf("a, b , c , d �� �� ==> %d , %d , %d , %d \n", a, b, c, d);
	
	a = b = c = d = 100; //a, b, c, d�� ��� 100 �Է�
	printf("a, b , c , d �� �� ==> %d , %d , %d , %d \n", a, b, c, d);
	
	a = 100;
	a = a + 200; //a�� a �ڽŰ� 200�� ���� ����
	printf("a �� �� ==> %d \n", a);
}
