#include <stdio.h>

int main()
{
    int a[10][10];
    int i = 1;

    for (i = 0; i < 9; i++)
        {
            a[i] = 8 - i;
            printf("%d", a[i]);
        }
    for (i = 0; i < 9; i++)
        {
            a[i] = a[ a[i] ];
            printf("%d", a[a[i]]);
        }


    return 0;

}
