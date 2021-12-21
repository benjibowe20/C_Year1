#include <stdio.h>

int main()
{
    char one;
    printf("please enter a character: ");
    scanf("%c", &one);

    switch (one)
    {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
        {
            printf("the letter is a vowel");
            break;
        }
        default:
        {
            printf("this is a constanant");
            break;
        }

    }
    return 0;
}
