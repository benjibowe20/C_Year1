//program to use function to find if number is even or odd

#include <stdio.h>

int evenorodd(int);

int main()
{
    int num;

    printf("please enter a number : ");
    scanf("%d\n", &num);
    evenorodd(num);

    return 0;
}

int evenorodd(int num)
{
    num = num%2;
    if (num == 1)
        printf("\nnumber is odd");
    else
        printf("\nnumber is even");
}
