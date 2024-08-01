#include <stdio.h>

int Sum(int value1, int value2);

void main()
{
	int var1 = 1, var2 = -3, var3 = 5;
	int var4 = -2, var5 = 7, var6 = -9;
	int result1, result2, result3;
	result1 = Sum(var1, var2);
	result2 = Sum(var3, var4);
	result3 = Sum(var5, var6);

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
}

int Sum(int value1, int value2){
	int result = value1 + value2;
	return result;
}

