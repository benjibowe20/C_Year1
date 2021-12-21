#include <stdio.h>

int main()

{
    float height = 10;
    float width = 2.5;
    float lenght = 11.5;

    float vol = height * width * lenght;
    printf("volume is %f cm cubed",vol);

    float surfarea = (lenght*width*2)+(height*height*2)+(width*height*2);
    printf("\nsurface area is %f cm squared",surfarea);

    return 0;
}
