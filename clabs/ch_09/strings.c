#include <stdio.h>

int main(void)
{
	char *str = "hello";
	printf("%c\n", str[1]);
	printf("%c\n", *(str + 1));
	char s[] = "Hello";
	char *p = "World";
	printf("%s\n", s);
	//printf("%s\n", (p+1));
	printf("%s\n", p);
}
