#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char str[51];
char* p;

void check(){
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			printf("%c", (*p - 'a' + 'A'));
			p++;
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			printf("%c", (*p + 'a' - 'A'));
			p++;
		}
		else
		{
			p++;
		}

	}
}
int main() {
	
	scanf("%s", str, 50);
	p = str;
	check();
	return 0;
}
