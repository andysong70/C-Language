#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[] = "komputer";

	printf("%s \n", str);
	str[0] = "c";
	printf("%s \n", str);

	return 0;
}