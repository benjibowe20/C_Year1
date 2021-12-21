#include <stdio.h>

int main()
{
    int num1;
    int result;

    printf("please enter a number between 1 and 100: ");
    scanf("%d", &num1);

    result = num1 % 2;

    if (result == 1)
        printf("odd number");
    else
        printf("the number is even");



    return 0;
}
