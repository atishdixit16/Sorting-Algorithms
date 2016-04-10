#include <stdio.h>

insertionSort(int array[], int n)
{
        int pass, i,j;
        for (pass = 1; pass < n; pass++)
                for (i = 0; i < pass-1; i++ )
                        if ( (array[pass] < array[i]) )
                                for (j=pass-1;j>=i;j--)
                                        swap(&array[j],&array[j+1]);
}

