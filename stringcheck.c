#include <stdio.h>
#include <ctype.h>
int is_within(char ch, char *str);

int main(void)
{
    char ch;
    char str[74] = "This is a simple sample string to check the custom funtion, is_within.";    // this is the string that is checked
    do{
    if(ch != '\n')
        puts("Please enter a character (space + enter to quit):  ");                                // requests the user input a character to check
    scanf("%c", &ch);                                                                           // assigns the users input to ch
    if(ch != '\n'){
    switch (is_within(ch, str)){                                                                // uses the return values from is_within in a switch to do different things
        case 2:                                                                                 // this case stops the program when the user enters #
            break;
        case 1:
            printf("The character, %c, is within the string, \"%s\"\n", ch, str);                  // tells the user that the character is within the string when is_within returns 1
            break;
        case 0:
            printf("The character, %c, is not within the string, \"%s\"\n", ch, str);              // tells the user that the character is not within the string when the function, is_within returns 0
            break;
    }}} while(ch != ' ');
return 0;
}

int is_within(char ch, char *str)
{
    int i;
    if(ch == ' ')
        return 2;                   // returns 2 if the user inputs # to quit
    else{
        for(i = 0 ; i < 74 ; i++){
            if(*(str + i) == ch){   // uses a pointer to check and see if ch is equal to any of the characters in the string
                return 1;           // returns 1 if so
                break;
            }
        }
        if(i == 74)                 // returns 0 if it gets to the end of the string without finding anything
        return 0;
    }
}