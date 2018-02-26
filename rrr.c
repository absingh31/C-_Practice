#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int number)
{
	int flag = 2;
	for(int i=2; i<=number/2; i++)
	{
		if(number%i == 0)
		{
			flag--;
			break;
		}
	}
	return flag;
}

// float result(int number)
// {
// 	if(prime(number) == 1)
// 		int sqr = sqrt(number);
// }


int main()
{
	int num;
	scanf("%d", &num);
	int x = prime(num);
	if(x == 2)
		printf("Prime number\n");
	else if(x == 1 || x<=0)
		printf("Not Prime\n");

	int a[6] = {1,6,3,90,23,11};

	int temp, flag=0;
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6 - i - 1; ++j)
		{
			temp = a[j];
			a[j]=a[j+1];
			a[j+1] = temp;
			flag=1;
		}
		if(!flag)
			break;
	}

	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}