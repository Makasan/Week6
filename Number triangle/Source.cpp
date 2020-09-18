#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num, i, j;
void shape() {
	for (i = 1; i <= num; i++) {
		for (j = num; j >= i; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}

}
int main() {
	scanf("%d", &num);
	if (num <= 0) {
		printf("Error");
	}
	else {
		shape();
	}
	return 0;
}