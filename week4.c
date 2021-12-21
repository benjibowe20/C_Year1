#include <stdio.h>

int main()
{
    int A[10];
    int i = 0;
    int j = 0;
    int num;

    printf("\nplease enter the number you would like to convert : ");
    scanf("%d", &num);

    for (i ; num > 0 ; i++)
    {
        A[i] = num % 2;
        num = num / 2;
    }

    printf("\nyour number in bianry is : ");

    for (i = i - 1 ; i >= 0 ; i--)
    {
        printf("%d", A[i]);
    }

    printf("\n");

    return 0;


}
