#include <stdio.h>
int main (void)

{
    char grade;
    unsigned int countA = 0;
    unsigned int countB = 0;
    unsigned int countC = 0;
    unsigned int countD = 0;
    unsigned int countF = 0;

    printf ("please enter the grades and when you are done press #\n");
    grade = getchar();
    while (grade != '#')
    {
        switch (grade)
        {
            case 'A':
            case 'a':
                countA++;
                break;
            case 'B':
            case 'b':
                countB++;
                break;
            case 'C':
            case 'c':
                countC++;
                break;
            case 'D':
            case 'd':
                countD++;
                break;
            case 'F':
            case 'f':
                countF++;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("Wrong input\nPlease enter correct grades\n");
                break;
        }

        //putchar(grade);
        grade = getchar();
    }
    printf("\n");
        
        printf("thanks for entering the grades! heres a summary\n");
        printf("A's:    %d\n", countA++);
        printf("B's:    %d\n", countB++);
        printf("C's:    %d\n", countC++);
        printf("D's:    %d\n", countD++);
        printf("F's:    %d\n", countF++);

    return 0;
}