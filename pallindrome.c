#include<stdio.h>
#include<string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
	int n;
	char s[15], s1[15];
	printf("Enter the number \n");
	scanf("%d", &n);

	sprintf(s, "%d", n);
	strcpy(s1, s);
	strrev(s);

	if(strcmp (s, s1) == 0)
		printf("Number given is palindrome\n");
	else
		printf("Sorry to say but it's not palindrome\n");

	return 0;
}

