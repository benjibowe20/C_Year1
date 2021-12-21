#include <stdio.h>

int main()
{
    int num1, num2;
    int result;

    printf("please enter a your first number: ");
    scanf("%d", &num1);
    printf("please enter a your second number: ");
    scanf("%d", &num2);

    result = num1 % num2;

    if (result >0)
        printf("it does not divide in evenly");
    else
        printf("it does divide in");

    return 0;
}
