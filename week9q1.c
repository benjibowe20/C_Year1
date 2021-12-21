#include <stdio.h>

//craeting an array with an arry

int  main()
{
    int array1[3][4];
    int array2[3][4];
    int array3[3][4];
    int i, j;

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
        }
    }


}
