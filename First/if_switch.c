/*
// if ���ǹ�
#include <stdio.h>
void main()
{
	int a = 101;
	if (a > 100)
		printf("a�� 100���� ŭ.\n");
	printf("���� ��µɱ��?");
}
*/

/*
// if ~else ~
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("¦���� �Է��߱���..\n");
	}
	else

	{
		printf("Ȧ���� �Է��߱���..\n");
	}
}
*/

/*
// ���� : 0~100���� ���ڸ� �Է¹ް�, 
// 90�� �̻� A, 
// 80�� �̻� B, 
// 70�� �̻� C, 
// 60�� �̻� D, 
// 60�� �̸��̸� F ������ ����Ͻÿ�.
// 1) if, else
// 2) if, else if, else
// 3) �׽�Ʈ ���� �����غ���
#include <stdio.h>
void main()
{
	int a;
	char result;
	
	while (1) {
		printf("\n������ �Է��ϼ��� : ");
		scanf_s("%d", &a);

		/*
		if (a >= 90)
			result = 'A';
		else {
			if (a >= 80)
				result = 'B';
			else {
				if (a >= 70)
					result = 'C';
				else {
					if (a >= 60)
						result = 'D';
					else
						result = 'F';
				}
			}
		}
		

		if (a >= 90)
			result = 'A';
		else if (a >= 80)
			result = 'B'; 
		else if (a >= 70)
			result = 'C';
		else if (a >= 60)
			result = 'D';
		else
			result = 'F';
		printf("%c �����Դϴ�. \n",result);
	}
	
	
}
*/


// switch case
#include <stdio.h>
void main()
{
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s(" %d", &score);
	
	switch (score / 10) {
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;

	}
	
	
}
