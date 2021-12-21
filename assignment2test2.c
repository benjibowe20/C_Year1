#include <stdio.h>
#include <stdlib.h>

#define CODE 4

int integer_convert(int num);

int main()
{ //start main

//define variables
    int num = 0;
    char list;
    int i, j;
    char *codearray[4];
    int num_of_times;
    char access_code[4] = {'4','5','2','3'};
    char check_code[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int t;
    int check = 0;
    int successful = 0;
    int incorrect = 0;
    int encrypted_check = 0;
    int error = 0;
    int test = 0;
    int * option1(void);

//main loop start
   do
   { //start do while loop

        //print menu
        printf("\n  ---------------------------------------------------------------------------------------");
        printf("\n  Below is a list of all the options you may execute.\n");
        printf("\n  1. Enter any code.");
        printf("\n  2. Encrypt code entered and verify if correct.");
        printf("\n  3. Decrypt code.");
        printf("\n  4. Display the number of times the encrypted code entered matches the authorised code.");
        printf("\n  5. Exit Program.\n");

        //user input to choose option
        printf("\n  Please enter the number of the option you wish to execute : ");
        scanf("%1s", &list);

        //switch statement depending on user input
        switch (list)
        { //start switch

            //option 1
            case '1':
                //enter a code and store it
                *codearray = option1();

                printf("%1s", codearray);

                break;

            case '2':
                //encrypt code and compare with access code
                if (encrypted_check == 1)
                    printf("\n  Youre code is already encrypted.");

                for (i=0;i<CODE;i++)
                    for (j=0;j<11;j++)
                        if (codearray[i] != check_code[j])
                            error = error + 1;
                        else
                            error = error - 1;
                            j=10;

                if (error != 34)
                {
                    printf("\n  This code cannot be encrypted. It must contain numbers only.");
                    test = 1;
                }

                error = 0;

                while (encrypted_check < 1 && test < 1)
                {
                    t = codearray[0];
                    codearray[0] = codearray[2];
                    codearray[2] = t;

                    t = codearray[1];
                    codearray[1] = codearray[3];
                    codearray[3] = t;

                    t=0;

                    for (i=0;i<CODE;i++)
                        if (codearray[i] < '9')
                            codearray[i]++;
                        else
                            codearray[i] = '0';

                    list = 0;


                    printf("\n  Your encrypted code is : %1s", codearray);

                    //check if code matches access code
                    if (access_code[0] != codearray[0])
                            check = 1;
                    if (access_code[1] != codearray[1])
                            check = 1;
                    if (access_code[2] != codearray[2])
                            check = 1;
                    if (access_code[3] != codearray[3])
                            check = 1;

                    if (check == 1)
                    {
                        printf("  --->  Wrong code entered");
                        incorrect++;
                    }
                    else
                    {
                        printf("  --->  Correct code enetered");
                        successful++;
                    }

                    check = 0;
                    encrypted_check = 1;
                    test = 0;

                }

                break; //end of option 2

            //option 3
            case '3':
                //counting number of pins by adding the correct and incorrect times
                if (encrypted_check == 0)
                    printf("\n  Your code has not been encrypted.");

                while (encrypted_check == 1)
                {
                    t = codearray[2];
                    codearray[2] = codearray[0];
                    codearray[0] = t;

                    t = codearray[3];
                    codearray[3] = codearray[1];
                    codearray[1] = t;

                    t=0;

                    for (i=0;i<CODE;i++)
                        if (codearray[i] > '1')
                            codearray[i]--;
                        else
                            codearray[i] = '9';

                    list = 0;

                    printf("\n  Your decrypted code is : %1s", codearray);

                    encrypted_check = 0;
                }

                break;

            case '4':
                //counting number of times
                printf("\n  The encrypted code matched the access code %d times\n", successful);
                printf("\n  The encrypted code did not match the access code %d times", incorrect);

                break;

            //option 4 (breaks loop)
            case '5':
                //when num is equal to 4 the loop breaks
                num = 5;
                break;//end  option 4

            // default option if a number is entered that is not one of the 4 options above then an error is printed
            default:
                printf("\n  Error with input, try again.\n");

        } //end switch

        //num is reset to 0 before program loops again
        if (num == 1 || num == 2 || num == 3 || num == 4)
        { //start if
            num = 0;
        } //end if

    }//end do while loop
    //condition of do while loop
    while (num != 5);

   return 0;
} //end main

int *option1(void)
{
    char check_code[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int i, j;
    int error = 0;
    int encrypted_check = 0;
    int array[CODE];

    printf("\n  Please enter a 4-digit code : ");
                for (i=0 ; i<CODE ; i++)
                    scanf("%1s", &*(array+i));

                for (i=0;i<CODE;i++)
                    for (j=0;j<11;j++)
                        if (*(array+i) != check_code[j])
                            error = error + 1;
                        else
                            error = error - 1;
                            j=10;

                printf("\nerror  %d\n", error);

                if (error == 38)
                    printf("\n  Your code has been set to : %1s", *(array));
                else
                    printf("\n  Invalid code entered");

                error = 0;

                encrypted_check = 0;

}
