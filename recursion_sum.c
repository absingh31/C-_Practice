#include<stdio.h>

int sum(int x)
{
	if(x!=0)
		return x+sum(x-1);
	else
		return x;
}

int main()
{
	int n, res;
	printf("Enter the number\n");
	scanf("%d", &n);

	res = sum(n);
	printf("%d\n", res);

	return 0;
}

