//This program prints a triangle of letters, which ascend and then descend based on the users input.
#include <stdio.h>
#include <ctype.h>              //I included this header file so that I could use isupper to check that the users input was correct.

int main(void)
{
    int row, ROWS, col;
    char ch, ch_inc, space;
    space = ' ';                //I use this variable so that it does not print a space after each letter.

    do
    {
        printf("Please enter an uppercase letter.\n");  // asks the user to input an uppercase letter
        scanf ("%c", &ch);                              // assigns the users input to the variable ch
        ROWS = ch - 'A' + 1;                            // the number of rows is determined by the users input
        printf("\n");
        
        if(isupper(ch) != 0)                            // this checks for the correct input
            for (row = 0; row < ROWS; row++)
            {
                printf("%*c", ROWS - row, space);       // prints the space before the letters
                for (ch_inc = 'A', col = 0; col <= row ; ch_inc++, col++)   // for loop for the first half of letters
                {
                    printf ("%c", ch_inc);                                  // prints the first half of letters
                }
                for (col = 0, ch_inc = ch_inc - 2; col < row ; col++, ch_inc--) // for loop for the second half of letters
                    printf ("%c", ch_inc);                                      // prints the second half of letters
                printf("\n");                                                   // goes along with the row counter
            }
        else
        {
            printf("Wrong input! Please enter an uppercase letter.\n");     // corrects user when they enter wrong input
            scanf("%c", &ch);                                               // scans for new input
            continue;
        }
        
    } while (row < ROWS);

    return 0;
}