#include<stdio.h>
#include<stdlib.h>

#define start int main()
#define bye return 0

float average;


start
{
	int accident[100];
	int n;

	printf("Enter the number of days ");
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		printf("Enter the %d element ", i);
		scanf("%d",&accident[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		average = average + (float)(accident[i]);
	}

	average = average/n;
	printf("Average is %f\n", average);

	for (int i = 0; i < n; ++i)
	{
		printf("Difference in the %d day is %f\n", i, (average - accident[i]));
	}

	bye;
}