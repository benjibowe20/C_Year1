#include <stdio.h>

int main()
{
    int var1, var2, var3 = 0;

    printf("what is your first variable:");
    scanf("%d", &var1);
    printf("what is your second variable:");
    scanf("%d", &var2);
    printf("what is your third variable:");
    scanf("%d", &var3);

    printf("%d\n%d\n%d", var1, var2 ,var3);

    return 0;
}
