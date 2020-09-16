#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[51];
	char* p;
	scanf("%s", str, 50);
	p = str;
	while (*p != '\0') 
	{
		if (*p >= 'a' && *p <= 'z') 
		{
			printf("%c",(*p - 'a' + 'A'));
			p++;
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			printf("%c",(*p + 'a' - 'A'));
			p++;
		}
		else
		{
			p++;
		}

	}
	return 0;
}