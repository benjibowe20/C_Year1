#include <stdio.h>

//

int main()
{
    int var1;
    int *ptr;

    var1 = 1;
    ptr = &var1;

    printf("*ptr contains %p", &ptr);

    return 0;

}
