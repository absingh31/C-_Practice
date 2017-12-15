#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, *ptr, sum = 0;

	printf("Enter the number of elements\n");
	scanf("%d", &num);

	ptr = (int*)calloc(num, sizeof(int));

	if (ptr == NULL)
	{
		printf("Error! Couldn't allocate the memory\n");
		exit(0);
	}

	printf("Enter the elements of array\n");
	for (int i = 0; i < num; ++i)
	{
		scanf("%d", (ptr+i));
		sum += *(ptr+i);
	}

	printf("Sum of all the array elements is: %d\n", sum);
	free(ptr);

	return 0;
}