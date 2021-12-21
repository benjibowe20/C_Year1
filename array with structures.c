#include <stdio.h>
#include <string.h>

#define SIZE 10

struct date
{
    int day;
    int month;
    int year;
};

struct data
{
    char firstname[SIZE];
    char secondname[SIZE];
    struct date dob;
    int height;
    int weight;
    char eyecolour[SIZE];
    char countryofc[SIZE];
};

int main()
{
    struct date dob;
    struct data person[3];
    int i;

    for (i=0;i<3;i++)
        printf("Firstname: ");
        scanf("%10s", &person[i].firstname);
        printf("Surname: ");
        scanf("%10s", &person[i].secondname);
        printf("Date of Birth: ");
        scanf("%d", &person[i].dob.day);
        scanf("%d", &person[i].dob.month);
        scanf("%d", &person[i].dob.year);
        printf("Height: ");
        scanf("%d", &person[i].height);
        printf("Weight: ");
        scanf("%d", &person[i].weight);
        printf("Eye Colour: ");
        scanf("%10s", &person[i].eyecolour);
        printf("Country of Citizenship: ");
        scanf("%10s", &person[i].countryofc);

        printf("\nFirstname: %10s", person[i].firstname);
        printf("\nSurname: %10s", person[i].secondname);
        printf("\nDate of Birth: %d / %d / %d", person[i].dob.day, person[i].dob.month, person[i].dob.year);
        printf("\nHeight: %d", person[i].height);
        printf("\nWeight: %d", person[i].weight);
        printf("\nEye Colour: %10s", person[i].eyecolour);
        printf("\nCountry of Citizenship: %10s", person[i].countryofc);

    return 0;
}
