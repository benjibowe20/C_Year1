/*Lab test one (program to test user input against random numbers)
 Benji Bowe
 09/11/2020
 */

 //imports

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function

int main()

{ //begin main

    //define variables
    int num = 0;
    int guess;
    int correct, incorrect, num_of_guesses;
    int num_of_tries = 0;

    //while loop for 5 guesses
    while (num_of_tries <= 4)
    { // begin while loop

        //user is asked for and enters guess
        printf("\nPlease Enter your guess between 1 and 10 : ");
        scanf("%d", &guess);

        //error checking user input
        if (guess <0 || guess > 10)
        { //begin if
            printf("\ninvalid input\n");
        } //end if

        //beginning of the random number generation
        printf("\nGenerating a random number between 1 and 10 \n");

        // num is assigned a random number generated between 1 – 10
        num = rand() % 10 + 1;

        // display the random number generated
        printf("%d ", num);

        //check if the numbers are equal or not.
        if (num == guess)
        { //begin if
            printf("\nSame numbers.\n");
            correct++;
        } //end if
        else
        { //begin else
            printf("\nDifferent numbers.\n");
        } //end else

        //monitoring users number of goes
        num_of_tries++;

    } //end while loop

    //calculation to find number of incorrect guesses
    incorrect = 5 - correct;

    //print number of correct guesses
    printf("\nYou got %d guesses correct", correct);

    //print number of incorrect guesses
    printf("\nYou got %d guesses incorrect", incorrect);

    return 0;
} // end main

