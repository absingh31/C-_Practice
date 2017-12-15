//Realloc always copies the old memory to new given contigous block and fills "0" at new positions


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, *ptr, sum = 0;

	printf("Enter the number of elements\n");
	scanf("%d", &num);

	ptr = (int*)malloc(num*sizeof(int));

	if(ptr == NULL)
	{
		printf("Error! Couldn't allocate the memory\n");
		exit(0);
	}

	printf("Enter the elements of the array \n");
	for (int i = 0; i < num; ++i)
	{
		scanf("%d", (ptr+i));
		sum += *(ptr+i);
	}

	printf("Sum of all the array elements is: %d\n", sum);

	int num2;

	printf("Looks like you want bigger sized array\nEnter the NEW number of elements\n");
	scanf("%d", &num2);

	ptr = realloc(ptr, num2);

	for (int i = 0; i < num2; ++i)
		printf("%u\t", *(ptr+i));

	return 0;
}