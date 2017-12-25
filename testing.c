#include<stdio.h>

void haha(int *d)
{
	*d=12;
}

int main(int argc, char const *argv[])
{
	int a;
	a=0;
	haha(&a);
	printf("%d\n", a);

	return 0;
}