#include <stdio.h>

int main()

{
    char c1, c2;

    printf("please enter your first character: ");
    scanf("%1s", &c1);
    printf("what is your second character: ");
    scanf("%1s", &c2);

    printf("%c", c1);
    printf("\%c", c2);

    return 0;
}
