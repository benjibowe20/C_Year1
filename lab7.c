#include <stdio.h>

#define LEN 11

int main()
{
    int array[LEN] = {1,3,4,7,9,2,4,6,8,10,12};
    int a[5];
    int aux[LEN];
    int k;
    int hi;
    int lo;
    int mid;
    int j;
    int i;

    for (j = 0 ; j< LEN/2 ; j++)
        a[j] = array[j];

    for (int k = lo; k <= hi; k++)
        array[k] = a[k]; i = lo, j = mid+1;
        for (k = lo; k <= hi; k++)
            if (i > mid)
                a[k] = aux[j++];
            else if (j > hi)
                a[k] = aux[i++];
            else if ((aux[j], aux[i]))
                a[k] = aux[j++];
            else
                a[k] = aux[i++];

    for (i = 0 ; i < LEN ; i++)
        printf("%d", aux[i]);

    return 0;
}
