// Benji Bowe C20416006
// 18/02/2021

//program to convert an array of temperatures to farenheit and kelvin.

#include <stdio.h>

#define NUM 5

//function signatures
float convert_temp(float *array);
float in_kelvin(float num);

int main()
{
    //define variables
    float celsius[NUM];
    int i;
    float average;
    float kelvin;

    //get input for temperatures
    printf("please enter %d numbers in celcius :\n", NUM);
    for (i=0 ; i<NUM ; i++)
    {
        scanf("\n%f", & *(celsius + i));
    }

    //get average value for celcius and print
    average = convert_temp(celsius);
    printf("\naverage is %f\n", average);

    //turn average value in celcius to kelvin and print
    kelvin = in_kelvin(average);
    printf("\naverage teperature in kelvin is : %f\n", kelvin);

    return 0;
} // end main

//funtion to convert celcius to farenheit and get average of temperatures in celcius
float convert_temp(float *array)
{
    //define variables
    int i;
    float average;
    float sum;
    float farenheit;

    // displays celcius with farenheit beside it
    for (i = 0 ; i < NUM ; i++)
        farenheit = (*(array + i) * 9) / 5 + 32;
        printf("\n%f in celcius is %f in farenheit\n"), *(array + i) ,farenheit;

    // calculate average of numbers
    for (i = 0 ; i < NUM ; i++)
        sum = sum + *(array + i);
    average = sum / NUM ;
    return (average);
}//end function

//function to convert to kelvin
float in_kelvin(float num)
{
    num = num + 273;

    return num;
}//end function







