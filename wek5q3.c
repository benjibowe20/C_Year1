#include <stdio.h>

int main()
{
    char status;

    printf("please enter your marital status:\nS = single\nM = married\nW = widowed\nE = seperated\nD = divorced\n");
    scanf("%c", &status);

    switch (status)
    {
        case 's':
        case 'S':
        {
            printf("single");
            break;
        }
        case 'm':
        case 'M':
        {
            printf("married");
            break;
        }
        case 'W':
        case 'w':
        {
            printf("widowed");
            break;
        }
        case 'e':
        case 'E':
        {
            printf("seperated");
            break;
        }
        case 'd':
        case 'D':
        {
            printf("divorced");
            break;
        }
        default:
        {
            printf("invalid input");
            break;
        }
    }

    return 0;
}
