#pragma once

// 배열 요소의 합
void array_sum() {

	int hi[5] = { 1,2,3,4,5 };
	int sum=0;
	for (int i = 0; i < sizeof(hi) / sizeof(int); i++) {
		sum = sum + hi[i];
	}
	printf("hi 배열의 각 요소 합은 %d 입니다.", sum);
}

// 2차원 배열 구구단
void gugu_array_2() {
	int gugu[9][9];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugu[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%dX%d=%2d	", j + 1, i + 1, gugu[i][j]);
		}
		printf("\n");
	}
}

// 포인터
void pointer_1() {
	int aa[4] = { 100,200,300,400 };
	int* ptr;

	for (int i = 0; i < 4; i++){
		printf("aa[%d] 값은 %d\n",i,aa[i]);
	}

	ptr = aa;	// aa[0]의 주소
	*ptr = 500;	// ptr이 가리키는 값 aa[0]
	ptr = ptr + 3; // aa[3]의 주소
	*ptr = 600;	   // ptr이 가리키는 값 aa[3]
	//*(ptr+3) = 600;	   // 주소(ptr+3)이 가리키는 값 aa[3]

	for (int i = 0; i < 4; i++) {
		printf("변경된 aa[%d] 값은 %d\n", i, aa[i]);
	}
}

void pointer_2() {

	char data[5] = { 1, 2, 3, 4, 5 };
	int i, j, k;
	int sum = 0, sum_p = 0, sup_pp = 0;
	int select = 2;
	char* p = data + select;

	printf("- %p %p %p %p\n", p, &p, p[0], &data);

	for (i = 0; i < 10; i++) {
		sum = sum + data[select];
		printf("sum값은 %d \n", sum);
	}
	for (j = 0; j < 10; j++) {
		sum_p = sum_p + *(data + select);
		printf("sum_p값은 %d \n", sum_p);
	}
	for (k = 0; k < 10; k++) {
		sup_pp = sup_pp + *p;
		printf("sum_pp값은 %d \n", sup_pp);
	}

}

void pointer_3() {

	int num1 = 100;
	int num2 = 200;
	int num3 = 300;
	printf("%p  %p  %p \n", &num1, &num2, &num3);
	int* a[3] = { &num1, &num2, &num3 };
	printf("%p \n", a);
	printf("%p \n", a[0]);

	for (int i = 0; i < 3; i++) {
		printf("a[%d] = 주소값 : %p, 값 : %d\n", i, a+i, *(a+i));	
		// (a에 담긴 주소)num1에 +3 한것이지만 
		// num1,num2,num3의 주소는 연속이 아니기 때문에 생각하는 값이 안나온것!!
		printf("a[%d] = 주소값 : %p, 값 : %d\n", i, a[i], *a[i]);
	}

}


// 구조체
struct student1 {
	char name[20];
	int kor;
	int eng;
	float avg;
};
void struct_1(){
	struct student1 std1;
	printf("이름?");
	scanf_s("%s", std1.name,10);
	printf("영어?");
	scanf_s("%d", &std1.kor);
	printf("국어?");
	scanf_s("%d", &std1.eng);
	
	std1.avg = (float)(std1.kor + std1.eng) / 2;

	printf("이름 : %s", std1.name);
	printf("국어 : %d", std1.kor);
	printf("영어 : %d", std1.eng);
	printf("평균 : %f", std1.avg);
}

// 구조체 배열
struct student2 {
	char name[10];
	int kor;
	int eng;
	float avg;
};
void struct_2() {
	struct student2 std2[3];

	int i;
	strcpy(std2[0].name, "Kim");
	std2[0].kor = 90;
	std2[0].eng = 80;
	std2[0].avg = (std2[0].kor + std2[0].eng) / 2.0f;

	strcpy(std2[1].name, "Lee");
	std2[1].kor = 70;
	std2[1].eng = 60;
	std2[1].avg = (std2[1].kor + std2[1].eng) / 2.0f;
	strcpy(std2[2].name, "Park");
	std2[2].kor = 50;
	std2[2].eng = 40;
	std2[2].avg = (std2[2].kor + std2[2].eng) / 2.0f;
	
	printf("-- 구조체 배열 --\n");
	for (i = 0; i < 3; i++)
	{
		printf("학생 이름 ==> %s\n", std2[i].name);
		printf("국어 점수 ==> %d\n", std2[i].kor);
		printf("영어 점수 ==> %d\n", std2[i].eng);
		printf("평균 점수 ==> %5.1f\n", std2[i].avg);
		printf("\n");
	}

}


struct student3 {
	char name[10];
	int kor;
	int eng;
	float avg;
};
void struct_3() {
	struct student3 std3;
	struct student3 *p3;
	
	p3 = &std3;

	printf("이름?");
	scanf_s("%s", p3->name,10);
	printf("국어?");
	scanf_s("%d", &p3->kor);
	printf("영어?");
	scanf_s("%d", &p3->eng);

	p3->avg = (float)(p3->kor + p3->eng) / 2;

	printf("학생 이름 ==> %s\n", p3->name);
	printf("국어 점수 ==> %d\n", p3->kor);
	printf("영어 점수 ==> %d\n", p3->eng);
	printf("평균 점수 ==> %5.1f\n", p3->avg);
}

// static
void static_ex() {
	static int a = 0;	// 프로그램 시작시 1번만 초기화됨, 프로그램 끝날때 파괴
	//int a = 0;
	a = a + 100;
	printf("%d\n", a);
}
