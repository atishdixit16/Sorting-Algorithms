#include <stdio.h>

selectionSort(int array[], int n)
{
        int pass, i;
        for (pass = 0; pass < n; pass++)
        {
                int min = 10000;
                int minIndex;
                for (i = pass; i < n; i++)
                {
                        if (array[i] < min)
                        {
                                min = array[i];
                                minIndex = i;
                        }
                }
                if (minIndex != pass)
                        swap(&array[pass], &array[minIndex]);
        }
}

