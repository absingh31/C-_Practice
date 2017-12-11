#include<stdio.h>

int i=0,n;

int print(int a[])
{
	if(i>=n)
		return 0;

	printf("%d\n", a[i]);
	i++;
	return print(a);

}

int main()
{
	int res, a[100];
	printf("Enter the size of array\n");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);

	print(a);

	return 0;
}