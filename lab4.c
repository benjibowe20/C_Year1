#include <stdio.h>
#include <stdlib.h>

#define LEN 1000

int main()
{
    int i, j;
    int M[LEN];
    int N[LEN];
    int t;
    int count=0;

    for (i=0;i<LEN;i++)
        M[i] = rand();

    for (i=0;i<LEN;i++)
        N[i] = rand();


    for (i=0;i<LEN;i++)
        if (M[i]<M[i+1])
            t = M[i];
            M[i] = M[i-1];
            M[i-1] = t;


    for (i=0;i<LEN;i++)
        if (N[i]<N[i+1])
            t = N[i];
            N[i] = N[i-1];
            N[i-1] = t;


    for (i=0;i<LEN;i++)
        if (M[i]==N[i])
            printf("%d   and    %d\n", M[i], N[i]);
            count++;

    printf("\nThere was %d matching numbers.", count);


    return 0;
}


