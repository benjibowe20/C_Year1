#include <stdio.h>

int main()
#define NUM_OF_ELS 8
{
    char chars[NUM_OF_ELS] = {'a', ' ', 'b', ' ', 'c', ' ', 'd'};
    int i;

    for (i = 0 ; i < NUM_OF_ELS ; i++)
        if (*(chars+i) == ' ')
            *(chars+i) = '_';

    for (i = 0 ; i < NUM_OF_ELS ; i++)
        printf("%c ", *(chars+i));


    return 0;
}
