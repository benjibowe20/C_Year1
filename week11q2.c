#include <stdio.h>
#define NUM 5

int main()
{
    float litres[NUM] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[NUM] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[NUM];
    int i, j;

    for (i = 0 ; i < NUM ; i++)
        *(mpl+i) = *(miles+i) / *(litres+i);

    for (j = 0 ; j < NUM ; j++)
        printf("%d ", *(mpl+j));

    return 0;

}
