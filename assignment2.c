/* Program to display menu options and user make selection. The menu will consist of antering a code, encrypting that code, decrypting an encrypted code,
comparing code with access code, displaying number of times code matched access code and a menu tio leave program. All options are implemented in functions using pass
by reference when neccessary.*/

/*
Benji Bowe
C20416006
last edited: 04/03/2021
*/

#include <stdio.h>

#define CODE 4

//define variables used in functions and main
int successful = 0;
int incorrect = 0;
int encrypted_check = 0;
int decrypted_check = 0;
int number_check = 0;
int error = 0;

//Main block of program
int main()
{
    //define variables
    int loop = 1;
    char list_selection;
    int *code_array[CODE];
    int code;
    int encrypted_code = 0;
    int decrypted_code = 0;
    int encrypted_check = 0;
    int test = 0;

    //define functions which use pass by reference
    int decrypt(int *num1);
    void countanddisplay(int *num1, int  *num2);
    int entercode(void);
    int encrypt(int *num1);
    int quit(void);

    //do-while loop which loops menu and option choice until option 5 is picked and loop is broken.
    do
    {
        //print menu
        printf("\n  --------------------------------------------------------------------------------------");
        printf("\n  Below is a list of all the options you may execute.\n");
        printf("\n  1. Enter any code.");
        printf("\n  2. Encrypt code entered and verify if correct.");
        printf("\n  3. Decrypt code.");
        printf("\n  4. Display the number of times the encrypted code entered matches the authorised code.");
        printf("\n  5. Exit Program.\n");

        //enter the option to execute and store value
        printf("\n  Please enter the number of the option you wish to execute : ");
        scanf("%1s", &list_selection);

        //switch case staement for option selection to be executed
        switch (list_selection)
        {
            case '1':
                //funtion to enter code
                code = entercode();

                break;

            case '2':
                //funtion to encrypt the code entered in option 1 and store the code in a variable
                encrypted_code = encrypt(&code);

                break;

            case '3':
                //function to decrypt code once it has been encrypted in option 2
                decrypted_code = decrypt(&encrypted_code);

                break;

            case '4':
                //funtion to print the number of times the access code matched the encrypted code
                countanddisplay(&successful, &incorrect);

                break;

            case '5':
                //funtion which dispalys the option for a user to leave program by ending do-while loop
                loop = quit();

                break;

            default:
                //default case if the option inputted was not a number in the menu
                printf("\n  Error with input, try again.\n");

        }//end switch


    }//end do-while
    //do-while condition
    while (loop == 1);

    return 0;
}//end main

//function for option 1
//this function will read in the users code as an integer and then change it to an array
//it is changed to an array for the purpose of error checking
//the array is then changed back to an integer and the neccesary display will be executed
//the inputtted code is then returned to MAIN
int entercode(void)
{
    //function variables
    int i;
    int num;
    int array1[CODE];
    int test = 0;
    int invalid = 0;

    //print statement for code to be entered
    printf("\n  Please enter a 4-digit code : ");
    scanf("%d", &num);

    //check if code is too big
    if (num > 10000 || num < 0)
    {
        printf("\n  Your code must contain 4 numbers.");
        error = 1;
    }

    //while loop if code is correct length
    while (invalid == 0)
    {
    //number converted to array
        *(array1 + 0) = num / 1000;
        num = num - (1000*( *(array1 + 0)));
        *(array1 + 1) = num / 100;
        num = num - (100*( *(array1 + 1)));
        *(array1 + 2) = num / 10;
        num = num - (10*( *(array1 + 2)));
        *(array1 + 3) = num / 1;
        num = num - (1*( *(array1 + 3)));

        //for loop for array to be checked and switched back to an integer
        for (i=0;i<CODE;i++)
            if (*(array1 + i) > 9 || *(array1 + i) < 0)
            {
                test = 1;
            }
            else
            {
                test = 0;
            }

            //array changing to integer
            num += *(array1) * 1000;
            num += *(array1 + 1) * 100;
            num += *(array1 + 2) * 10;
            num += *(array1 + 3) * 1;

            //if criteria is met the code is changed and printed
            if (test == 0 && num < 10000 && num >= 0)
            {
                printf("\n  Your code has been set to: %d", num);
                error = 0;
            }
            number_check = 1;

            invalid = 1;
    }//end while

    //setting variables to ensure no errors in next option or repeat of this function
    encrypted_check = 0;

    return num;
}//end funtion

//this function encrypts the code eneterd by the user and checks if it matches access code
//like the first funtion and third the number which is read in is changed to an array to be analysed and encrypted
//neccesary error checking is done within the function
//Access code is defined in the variables and the encrypted code is compared to this access code
//neccessary information is displayed
//array is converted back to integer and returned from the function
int encrypt(int *num1)
{
    //function variables
    int array1[CODE];
    int i, t;
    int test = 0;
    int access_code[CODE] = {4,5,2,3};
    int check = 0;
    int num2 = 0;
    int num = *num1;

    //check if code is already encrypted
    if (encrypted_check == 1)
    {
        printf("\n  Youre code is already encrypted.");
    }

    //check if a code has been entered
    if (number_check == 0)
    {
        printf("\n  You must enter a code first.");
    }

    //check if code entered is okay to be encrypted
    if (error == 1)
    {
        printf("\n  There was a mistake in the code entered.");
    }

    //number changed to array
    *(array1 + 0) = num / 1000;
    num = num - (1000*( *(array1 + 0)));
    *(array1 + 1) = num / 100;
    num = num - (100*( *(array1 + 1)));
    *(array1 + 2) = num / 10;
    num = num - (10*( *(array1 + 2)));
    *(array1 + 3) = num / 1;
    num = num - (1*( *(array1 + 3)));

    //while loop to ensure all conditions are met before encrypting
    while (encrypted_check == 0 && decrypted_check == 0 && error == 0 && number_check == 1)
    {
        //swap first and third elements of code
        t = *(array1);
        *(array1) = *(array1 + 2);
        *(array1 + 2) = t;

        //swap second and fourth elements of code
         t = *(array1 + 1);
        *(array1 + 1) = *(array1 + 3);
        *(array1 + 3) = t;

        t=0;

        //increments each element of code and if value is 9 it becomes 0
        for (i=0;i<CODE;i++)
            if (*(array1 + i) < 9)
            {
                *(array1 + i) = *(array1 + i) + 1;
            }
            else
            {
                *(array1 + i) = 0;
            }

        //display enecrypted code
        printf("\n  Your encrypted code is : ");

        for (i=0;i<CODE;i++)
            printf("%d", *(array1 + i));

        //compare encrypted code to access code
        if (*(access_code + 0) != *(array1 + 0))
        {
            check = 1;
        }
        if (*(access_code + 1) != *(array1 + 1))
        {
            check = 1;
        }
        if (*(access_code + 2) != *(array1 + 2))
        {
            check = 1;
        }
        if (*(access_code + 3) != *(array1 + 3))
        {
            check = 1;
        }

        //print neccesary result of comparison
        if (check == 1)
        {
            printf("  --->  Wrong code entered");
            incorrect++;
        }
        else
        {
            printf("  --->  Correct code entered");
            successful++;
        }

        //change array back to number
        num2 += *(array1) * 1000;
        num2 += *(array1 + 1) * 100;
        num2 += *(array1 + 2) * 10;
        num2 += *(array1 + 3) * 1;

        //reset and set variables for future use
        check = 0;
        encrypted_check = 1;
        test = 0;

    }//end while

    return num2;

}//end funtion

//this function decrypts the encrypted code
//like other functions it changes number to array
//necccessary error checking is done
//neccessary display is executed
int decrypt(int *num1)
{
    //function variables
    int array1[CODE];
    int num2 = 0;
    int i, t;
    int num = *num1;

    //check if code is decrypted
    if (encrypted_check == 0 && number_check == 1)
    {
        printf("\n  Your code cannot be decrypted as it is not encrypted.");
    }

    //check if code has been entered
    if (number_check == 0)
    {
        printf("\n  You must enter a code first.");
    }

    //if conditions are met decryption is done
    if (encrypted_check == 1 && number_check == 1)
    {
        //change number to array
        *(array1 + 0) = num / 1000;
        num = num - (1000*( *(array1 + 0)));
        *(array1 + 1) = num / 100;
        num = num - (100*( *(array1 + 1)));
        *(array1 + 2) = num / 10;
        num = num - (10*( *(array1 + 2)));
        *(array1 + 3) = num / 1;
        num = num - (1*( *(array1 + 3)));

        //swap first and third elements
        t = *(array1 + 2);
        *(array1 + 2) = *(array1);
        *(array1) = t;

        //swap second and fourth elements
        t = *(array1 + 3);
        *(array1 + 3) = *(array1 + 1);
        *(array1 + 1) = t;

        //if number is 1 it becomes 9 and decrements other numbers
        for (i=0;i<CODE;i++)
            if (*(array1 + i) > 1)
            {
                *(array1 + i) = *(array1 + i) - 1;
            }
            else
            {
                *(array1 + i) = 9;
            }

        //cghange array back to number
        num2 += *(array1) * 1000;
        num2 += *(array1 + 1) * 100;
        num2 += *(array1 + 2) * 10;
        num2 += *(array1 + 3) * 1;

        //print decrypted code
        printf("\n  Your decrypted code is: %d", num2);
    }//end if

    //reset variables for future use
    encrypted_check = 0;

    return num2;
}//end funtion

//funtion to display number of times access code was matched
//reads in numbers which increment when either the access code matches encrypted or does not match encrypted code
void countanddisplay(int *num1, int *num2)
{
    //prints values from previous options
    printf("\n  Your code matched the access code %d times.", *num1);
    printf("\n  Your code did not match the access code %d times.", *num2);
}//end function

//this funtion displays a small menu to the user based on thier option choice
//the menu gives the user an option as to whether they would like to leave the program or not
//based on user input the program either ends or returns back to menu
int quit(void)
{
    //funtion variables
    char choice;
    int loop = 0;

    //prints menu for user and gets input
    printf("\n  Are you sure you want to quit?\n");
    printf("\n  Type Y if you wish to quit. Type N if you want to return to menu.\n");
    printf("\n  Type Y or N : ");
    scanf("%1s", &choice);

    //based on input the program either ends or returns to menu
    if (choice == 'Y' || choice == 'y')
    {
        loop = 0;
    }
    else if (choice == 'N' || choice == 'n')
    {
        loop = 1;
    }

    return loop;
}//end funtion

