#include <stdio.h>
#define LEN 9


void merge(char *a, char *aux, intlo, intmid, inthi)
{
    {for (intk = lo; k <= hi; k++)
        aux[k] = a[k];
        inti = lo, j = mid+1;
        for (intk = lo; k <= hi; k++)
        {
            if (i > mid)
                a[k] = aux[j++];
            else if (j > hi)
                a[k] = aux[i++];
            else if (less(aux[j], aux[i]))
                a[k] = aux[j++];
            else
                a[k] = aux[i++];}}
}

void msort(char *a, char *aux, intlo, inthi)
{
    if (hi <= lo)return;
    intmid = lo + (hi - lo) / 2;
    msort(a, aux, lo, mid);
    msort(a, aux, mid+1, hi);merge(a, aux, lo, mid, hi);
}
void main()
{
    char a[] = “mergesort”, aux[sizeof(a)];
    msort(a, aux, 0, strlen(a)- 1);
}
