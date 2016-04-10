#include <stdio.h>
#include "sort_functions.h"

int main(int argc, char *argv[])
{
	int n,i;
	n=argc-1;
	int array[n-1];
	for (i = 0; i<=n-1; i++)
		array[i]=atoi(argv[i+1]);

	//bubbleSort(array,n);
	//selectionSort(array,n);
	insertionSort(array,n);
	//quickSort(array,0,n-1);

	//printing the output
	printf("The sorted array: ");
	for (i = 0; i<=n-1; i++)
		printf("%d ",array[i]);
	printf("\n");

	return 0;
}

