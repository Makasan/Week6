#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	char str[4];
	int num[3], sum = 0, i, j, A, B, C;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	scanf("%s", &str);
	for (j = 0; j < 3; j++)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			if (sum <= num[i])
			{
				sum = num[i];
			}
		}
		for (i = 0; i < 3; i++) {
			if (sum == num[i]) {
				num[i] = -1;
				break;
			}
		}
		if (j == 0) 
		{
			C = sum;
		}
		else if (j == 1) 
		{
			B = sum;
		}
		else 
		{
			A = sum;
		}
	}
	for (j = 0; j < 3; j++) 
	{
		if (str[j] == 'A') 
		{
			printf("%d ", A);
		}
		else if (str[j] == 'B') 
		{
			printf("%d ", B);
		}
		else if (str[j] == 'C') 
		{
			printf("%d ", C);
		}
	}
	return 0;
}