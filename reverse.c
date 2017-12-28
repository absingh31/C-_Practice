#include<stdio.h>

int main()
{
	char string[100];
	int count = 0;
	scanf("%s", string);
	while(string[count]!='\0')
	{
		count++;
	}
	while(count>=0)
	{
		printf("%c", string[count]);
		count--;
	}
	return 0;
}