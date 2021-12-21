#include <stdio.h>

int main()
{
    int mainpin, pintest, correctpin, incorrecpin;

    mainpin = 1234;

    printf("please enter your pin : ");
    scanf("%d", &pintest);

    if (mainpin == pintest)
        printf("this is the correct pin");
        correctpin++;
    else
        printf("this is not the correct pin");
        incorectpin++;



    return 0;
}
