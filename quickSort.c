#include <stdio.h>

int partition(int array[], int start, int end)
{
        int i = start;
        int j = end;
        while(i<j)
        {
                while(array[i]<=array[start] && i<end)
                        i++;
                while(array[j]>array[start] )
                        j--;
                if(i<j)
                        swap(&array[i],&array[j]);
        }
        if (j != start)
                swap(&array[start],&array[j]);
        return j;
}

void quickSort(int array[], int start, int end)
{
        if (start < end)
        {
                int part = partition(array, start, end);
                quickSort(array,start, part-1);
                quickSort(array,part+1,end);
        }
}
