#include <stdio.h>
#include <string.h>
#define MAX 100
char reverse(char s[]);
//int strlen(char s[]);

int main(void)
{
	char line[MAX];
	printf("Enter a string to reverse: ");
	fgets(line, MAX, stdin);
	//reverse(line);
	char backwards = reverse(line);
	printf("%s\n", backwards);
}
char reverse(char s[])
{
	char reverse_line[MAX];
	int len;
	len = strlen(s);
	int x = 0, i = 0, y = 0;
	//printf("%s\n", s[len]);
	//int numbers = len - 1;
	while(len != x){
		//printf("this is len count: %d\n", len);
		reverse_line[y] = s[--len];
		//reverse_line[y] = s[numbers];		
		printf("%c", reverse_line[y]);
		y++;	
	}		
	
}

/*int strlen(char s[])
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return(len);
}*/
