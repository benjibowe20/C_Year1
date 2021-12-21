#include <stdio.h>

int evenorodd(int);

int main()
{
    int num1;
    int answer;

    printf("number : ");
    scanf("%d", &num1);

    answer = evenorodd(num1);

    if(answer > 0)
    {
        printf("\nodd\n");
    }
    else
    {
        printf("\neven\n");
    }

    return 0;

}

int evenorodd(int num2)
{
    int result;

    result = num2%2;

    return result;
}
