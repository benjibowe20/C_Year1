/*
  Assignment 1
  Last edited 16/11/2020
  Benji Bowe
  ATM Program
*/

#include <stdio.h>

int main()
{ //start main

//define variables
    int count;
    int num = 0;
    char list;
    int incorrectpin = 0;
    int correctpin = 0;
    int pintest;
    int newpin1, newpin2;
    int num_of_times;
    int mainpin = 1234;

//main loop start
   do
   { //start do while loop

        //print menu
        printf("\nPlease enter the number you wish to execute from the following list :\n");
        printf("1. Verify pin.\n");
        printf("2. Change current pin.\n");
        printf("3. Display number of times pin was entered.\n");
        printf("4. End Program.\n");

        //user input to choose option
        printf("\nNumber : ");
        scanf("%1s", &list);

        //switch statement depending on user input
        switch (list)
        { //start switch

            //option 1
            case '1':
                //verifying user pin with preset pin of 1234
                printf("\nplease enter your 4-digit pin : ");
                scanf("%d", &pintest);

                //printing result of verification
                if (mainpin == pintest)
                { //start if
                    printf("\nThis pin is correct.\n");
                    correctpin++;
                } //end if
                else
                { //start else
                    printf("\nThis pin is incorrect.\n");
                    incorrectpin++;
                } //end else
                break; //end of option 1

            //option 2
            case '2':
                //asking user to input new pin two times
                printf("\nPlease enter your new pin : ");
                scanf("%d", &newpin1);
                printf("\nPlease enter your new pin again to verify : ");
                scanf("%d", &newpin2);

                //verifying both new pins entered were the same and if not pin wont change
                if (newpin1 == newpin2)
                { //start if

                    //assigning new pin into the main pin
                    mainpin = newpin1;

                    //error prevention when 0 is used
                    if (newpin1 >= 1000)
                    { //start if
                        printf("\nYour new pin has been set to %d\n", mainpin);
                    } //end if
                    else if (newpin1 < 1000 && newpin1 >= 100)
                    { //start else if
                        printf("\nYour new pin has been set to 0%d\n", mainpin);
                    } //end else if
                     else if (newpin1 < 100 && newpin1 >= 10)
                    { //start else if
                        printf("\nYour new pin has been set to 00%d\n", mainpin);
                    } //end else if
                     else if (newpin1 < 10)
                    { //start else if
                        printf("\nYour new pin has been set to 000%d\n", mainpin);
                    } //end else if
                } //end if
                else
                { //start else
                    printf("\nThe two pins you entered were not the same.\n");
                } //end else
                break; //end of option 2

            //option 3
            case '3':
                //counting number of pins by adding the correct and incorrect times
                num_of_times = correctpin + incorrectpin;

                //printing the numbers of each
                printf("\nYou have entered a pin %d times.\n", num_of_times);
                printf("\n%d of these were correct.", correctpin);
                printf("\n%d of these were incorrect.\n", incorrectpin);
                break;//end option 3

            //option 4 (breaks loop)
            case '4':
                //when num is equal to 4 the loop breaks
                num = 4;
                break;//end  option 4

            // default option if a number is entered that is not one of the 4 options above then an error is printed
            default:
                printf("\nError with input, try again.\n");

        } //end switch

        //num is reset to 0 before program loops again
        if (num == 1 || num == 2 || num == 3)
        { //start if
            num = 0;
        } //end if

    }//end do while loop
    //condition of do while loop
    while (num != 4);

   return 0;
} //end main
