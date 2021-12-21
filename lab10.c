#include <stdio.h>

int main()
{
    int i = 0;
    char string[20];
    int check = 0;

    printf("please enter 20 caharcters and ** arond the text you wish to swap: ");
    for (i=0;i<21;i++)
        scanf("%1c", string[i]);

    printf("your new string looks as follows : ");

    for (i=0;i<21;i++)
        if (string[i] == '*');
            check = check + 1;
        if (check < 1 || check > 1)
            printf("%d", string[i]);
        if (check == 1)
        {
            printf("%d", toupper(string[i]));
        }



    return 0;
}

