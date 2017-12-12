#include<stdio.h>

int i;

int digits(int x, int count)
{
	if(x!=0)
	{
		x=x/10;
		count++;
		return digits(x, count);
	}
	
	else
		return count;
}

int sum_digits(int x, int sum)
{
	if (x>0)
	{
		sum = sum + x%10;
		return sum_digits(x/10, sum);
	}
	else
		return sum;
	printf("Sum of digits are: %d\n", i);
}

int main()
{
	int n, dig, count=0, sum=0,res;
	
	printf("Enter the number\n");
	scanf("%d", &n);

	dig=digits(n, count);
	res = sum_digits(n, sum);

	printf("Number of digits are: %d\n", dig);
	printf("Sum of digits are: %d\n", res);

	return 0;
}