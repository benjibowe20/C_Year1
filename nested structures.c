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
    struct data person1, person2;

    printf("Firstname: ");
    scanf("%10s", &person1.firstname);
    printf("Surname: ");
    scanf("%10s", &person1.secondname);
    printf("Date of Birth: ");
    scanf("%d", &person1.dob.day);
    scanf("%d", &person1.dob.month);
    scanf("%d", &person1.dob.year);
    printf("Height: ");
    scanf("%d", &person1.height);
    printf("Weight: ");
    scanf("%d", &person1.weight);
    printf("Eye Colour: ");
    scanf("%10s", &person1.eyecolour);
    printf("Country of Citizenship: ");
    scanf("%10s", &person1.countryofc);

    printf("\nFirstname: %10s", person1.firstname);
    printf("\nSurname: %10s", person1.secondname);
    printf("\nDate of Birth: %d / %d / %d", person1.dob.day, person1.dob.month, person1.dob.year);
    printf("\nHeight: %d", person1.height);
    printf("\nWeight: %d", person1.weight);
    printf("\nEye Colour: %10s", person1.eyecolour);
    printf("\nCountry of Citizenship: %10s", person1.countryofc);

    person2 = person1;

    printf("\nPlease enter data for second person: \n");

    printf("Firstname: ");
    scanf("%10s", &person2.firstname);
    printf("Surname: ");
    scanf("%10s", &person2.secondname);
    printf("Date of Birth: ");
    scanf("%d", &person2.dob.day);
    scanf("%d", &person2.dob.month);
    scanf("%d", &person2.dob.year);

    printf("\nFirstname: %10s", person2.firstname);
    printf("\nSurname: %10s", person2.secondname);
    printf("\nDate of Birth: %d / %d / %d", person2.dob.day, person2.dob.month, person2.dob.year);
    printf("\nHeight: %d", person2.height);
    printf("\nWeight: %d", person2.weight);
    printf("\nEye Colour: %10s", person2.eyecolour);
    printf("\nCountry of Citizenship: %10s", person2.countryofc);


    return 0;
}
