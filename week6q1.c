#include <stdio.h>

int main()
{
    int array1[5];
    int array2[5];
    int index;

    printf("\nPlease enter the 5 numbers :\n");

    for (index = 0 ; index < 5 ; index++)
    {
        scanf("%d", &array1[index]);
        array1[index] = array2[index];
    }

    printf("\n%d", array2[index]);

    return 0;
}
