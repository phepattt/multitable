#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B, C;
	printf(" [   multiplication table   ]\n");
	printf("input : ");
	scanf("%d", &A);
	printf("times to : ");
	scanf("%d", &B);

	for (C = 1; C <= B; C++)
	{
		printf(" %d  x  %d   =  %d \n", A, C, A * C);
	}
	return 0;
}