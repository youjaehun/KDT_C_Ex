#include <stdio.h>
#include "function.h"
#include "func.h"
#define PI 3.141592

int a = 10;	// 전역변수 선언

void main() {
	//// 배열 ////
	//array_sum();	


	//// 2차원 배열 ////
	//gugu_array_2();

	
	//// 포인터 ////
	//pointer_1();
	//pointer_2();
	//pointer_3();

	//// 구조체 ////
	//struct_1();
	//struct_2();
	//struct_3();
	//func1();
	//func2();
	//static_ex();
	//static_ex();

	// 예약어 - extern
	printf("nain함수 변수 a는 %d \n", a);
	func1();
	func2();

}