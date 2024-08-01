/*
// if 조건문
#include <stdio.h>
void main()
{
	int a = 101;
	if (a > 100)
		printf("a는 100보다 큼.\n");
	printf("나는 출력될까요?");
}
*/

/*
// if ~else ~
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("짝수를 입력했군요..\n");
	}
	else

	{
		printf("홀수를 입력했군요..\n");
	}
}
*/

/*
// 문제 : 0~100점의 숫자를 입력받고, 
// 90점 이상 A, 
// 80점 이상 B, 
// 70점 이상 C, 
// 60점 이상 D, 
// 60점 미만이면 F 학점을 출력하시오.
// 1) if, else
// 2) if, else if, else
// 3) 테스트 범위 생각해보기
#include <stdio.h>
void main()
{
	int a;
	char result;
	
	while (1) {
		printf("\n점수를 입력하세요 : ");
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
		printf("%c 학점입니다. \n",result);
	}
	
	
}
*/


// switch case
#include <stdio.h>
void main()
{
	int score;
	printf("점수를 입력하세요 : ");
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
