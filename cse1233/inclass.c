#include <stdio.h>
int taxsingle (int);
int taxhead (int);
int taxjoint (int);
int taxseparate (int);

int main (void)
{
    int salary, a;
    float tax;
    printf("Please enter your tax category\n1. Single\n2. Head of Household\n3. Married, Joint\n4. Married, Seperate\n5. QUIT\n");

    while (a != 5)
    {
    printf("Choose an option 1-5:   ");
    scanf("%d", &a);
    printf("Please enter your salary:   ");
    scanf("%d", &salary);
    switch (a)
    {
        case 1:
        {
            taxsingle(salary);
            break;
        }
        case 2:
        {
            taxhead(salary);
            break;
        }
        case 3:
        {
            taxjoint(salary);
            break;
        }
        case 4:
        {
            taxseparate(salary);
            break;
        }
        default:
            printf("Please enter an option 1-4.");
    }
    printf("The tax you owe is %.2f\n", tax);
    }

return 0;
}

int taxsingle(int s)
{
    float tax;
    tax = .15 * (17850) + (.28 * (s - 17850));
    return tax;
}

int taxhead(int s)
{
    float tax;
    tax = .15 * (23900) + (.28 * (s - 23900));
    return tax;
}

int taxjoint(int s)
{
    float tax;
    tax = .15 * (29750) + (.28 * (s - 29750));
    return tax;
}

int taxseparate (int s)
{
    float tax;
    tax = .15 * (14875) + (.28 * (s - 14875));
    return tax;
}