#include <stdio.h>

/*
void main() {

	int sum_result;

	sum_result = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	printf("    sum 1~10 : %d \n", sum_result);

	int i;
	int for_sum_result=0;
	for (i = 1; i <= 10; i++) {
		for_sum_result+=i;
	}
	printf("for_sum 1~10 : %d \n", for_sum_result);
}
*/

/*
void main() {

	int dan;
	int i;

	printf("몇 단?");
	scanf_s("%d", &dan);

	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d \n", dan, i, dan * i);
	}

}
*/

/*

0, 1 비교 0이 더 크면 1, 0
1, 2 비교 1이 더 크면 2, 1
2, 3 비교 2가 더 크면 3, 2
3, 4 비교 3이 더 크면 4, 3

0, 1 비교 0이 더 크면 1, 0
1, 2 비교 1이 더 크면 2, 1
2, 3 비교 2가 더 크면 3, 2

0, 1 비교 0이 더 크면 1, 0
1, 2 비교 1이 더 크면 2, 1

0, 1 비교 0이 더 크면 1, 0

void main() {

	int a[5] = { 4, 2, 3, 0, 1 };
	int temp;
	int i, k;
	printf("정렬 전 배열 a ==> ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	int a_len = sizeof(a) / sizeof(int);

	// 버블 정렬
	for (i = 1; i < 5; i++) {
		for (k = 0; k < 5 - i; k++) {
			if (a[k] > a[k + 1]) {// 버블 정렬 사용
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}

	}

	printf("정렬 후 배열 a ==> ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
*/

void main() {

	int dan;
	int i;

	while(1){
		printf("몇 단?");
		scanf_s("%d", &dan);
		if (dan <= 0) {
			printf("@@@@@@@@@@@@@@@@@@@@\n구구단 모르지?\n@@@@@@@@@@@@@@@@@@@@");
			break;
		}
		for (int i = 1; i <= 9; i++) {
			printf("%d X %d = %d \n", dan, i, dan * i);
		}

	}
}