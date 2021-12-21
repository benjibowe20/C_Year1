#include <stdio.h>
#include <string.h>

struct flight_info
{
    char airline_name[20];
    float flight_number;
    char passenger_surname[20];
    char seat_number[4];
    char destination[15];
    int no_of_bags;
};

int  main()
{
    void get_flight_info(struct flight_info *ptr);
    void display_flight_info(struct flight_info passenger);
    struct flight_info passenger1, passenger2;
    struct flight_info *passenger1_ptr, *passenger2_ptr;

    passenger1_ptr = &passenger1;
    passenger2_ptr = &passenger2;

    get_flight_info(passenger1_ptr);
    display_flight_info(passenger1);

    get_flight_info(passenger2_ptr);
    display_flight_info(passenger2);

    return 0;
}

void display_flight_info(struct flight_info passenger)
{
    printf("\nThe data for this passenger is: ");
    printf("\nAirline name is %s", passenger.airline_name);
    printf("\nFlight number is %f", passenger.flight_number);
    printf("\nPassenger surname is %s", passenger.passenger_surname);
    printf("\nSeat number is %s", passenger.seat_number);
    printf("\nDestination is %s", passenger.destination);
    printf("\nThere is %d bags for this passenger", passenger.no_of_bags);
}

void get_flight_info(struct flight_info *ptr)
{
    printf("Airline Name: ");
    scanf("%20s", &(ptr->airline_name));
    printf("Flight Number: ");
    scanf("%f", &(ptr->flight_number));
    printf("Passenger Surname: ");
    scanf("%20s", &(ptr->passenger_surname));
    printf("Seat Number: ");
    scanf("%4s", &(ptr->seat_number));
    printf("Destination: ");
    scanf("%15s", &(ptr->destination));
    printf("How Many Bags: ");
    scanf("%d", &(ptr->no_of_bags));
}
