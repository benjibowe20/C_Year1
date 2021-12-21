#include <stdio.h>

//pointing at variable

int main()
{
    int var1;
    int *ptr;

    ptr = &var1;
    var1 = 69;

    printf("%p\n", *ptr);

    ptr++;

    printf("%p\n", *ptr);

    return 0;

}
