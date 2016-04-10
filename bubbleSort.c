#include <stdio.h>

bubbleSort(int array[], int n)
{
        int i,j;
        for (i=n-2; i>=0; i--)
                for (j=0; j<=i; j++)
                        if (array[j+1]<array[j])
                                swap(&array[j], &array[j+1]);
}

