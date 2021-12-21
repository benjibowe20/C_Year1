//Program to use structures to collect information on two passenegers of an airline company. Functiions are used to collect and display the data.
//Benji Bowe
//22/4/2021

//includes and defines for program
#include <stdio.h>
#include <string.h>

#define SIZE 15

//structure for date which will be nested in the flight_info structure
struct flight_date
{
    int day;
    int month;
    int year;
};

//structure for passeneger info with the flight_date structure nested in it
struct flight_info
{
    char flight_number[SIZE];
    struct flight_date;
    char surname[SIZE];
    char firstname[SIZE];
    char seatnumber[SIZE];
    char destination[SIZE];
};

//program main
int main()
{
    //define variables and sign the functions and structures
    void get_flight_data(struct flight_info *ptr);
    void display_passenger_info(struct flight_info *ptr);
    struct flight_date passenger1date, passenger2date;
    struct flight_date *passenger1date_ptr, *passenger2date_ptr;
    struct flight_info passenger1, passenger2;
    struct flight_info *passenger1_ptr, *passenger2_ptr;

    //point the pointers to the adresses of passsengers
    passenger1_ptr = &passenger1;
    passenger2_ptr = &passenger2;

    //print text and call funtions to collect data on the passenegrs
    printf("Please enter details for passenger 1\n\n");
    get_flight_data(passenger1_ptr);
    printf("\nPlease enter details for passenger 2\n\n");
    get_flight_data(passenger2_ptr);

    //print statements and display info on each passenger
    printf("\nHere is the details for passenger 1:\n");
    display_passenger_info(passenger1_ptr);
    printf("\n\nHere is the details for passenger 2:\n");
    display_passenger_info(passenger2_ptr);
}//end main

//this funtion collects info on the passenegr using pass by reference
void get_flight_data(struct flight_info *ptr)
{
    //below are the print statements to ask the user for data and the the data is collect and put into its correct place in the structure
    printf("Flight Number: ");
    scanf("%15s", &(ptr->flight_number));

    //here the nested structure is used to collect date info
    printf("Date of Flight: ");
    scanf("%d", &(ptr->day));
    scanf("%d", &(ptr->month));
    scanf("%d", &(ptr->year));

    //print and scans continue
    printf("Surname: ");
    scanf("%15s", &(ptr->surname));
    printf("First name: ");
    scanf("%15s", &(ptr->firstname));
    printf("Seat Number: ");
    scanf("%15s", &(ptr->seatnumber));
    printf("Destination: ");
    scanf("%15s", &(ptr->destination));
}//end get_flight_data function

//this function diplays the data on each passenegr using pass by reference
void display_passenger_info(struct flight_info *ptr)
{
    //simple print f staements to dislplay the informatioin. In the second printf statement the nested structure is used
    printf("\nFlight Number: %s", (ptr->flight_number));
    printf("\nDate of flight: %d / %d / %d", (ptr->day), (ptr->month), (ptr->year));
    printf("\nSurname: %s", (ptr->surname));
    printf("\nFirst Name: %s", (ptr->firstname));
    printf("\nSeat Number: %s", (ptr->seatnumber));
    printf("\nDestination: %s", (ptr->destination));
}//end display_passenger_info function

