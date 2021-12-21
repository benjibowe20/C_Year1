#include <stdio.h>

//accumulating 2d array

int main()
{
    int data[4][6] = {{3, 2, 5, 7, 4, 2},
                    {1, 4, 4, 8, 13, 1},
                    {9, 1, 0, 2},
                    {0, 2, 6, 3, -1, -8}};
    int i, j;
    int sum = 0;

    for (i = 0 ; i < 4 ; i ++)
    {
        for (j = 0 ; j < 6 ; j++)
        {
            sum = sum + data[i][j];
        }
    }

    printf("total is %d", sum);

    return 0;



}
