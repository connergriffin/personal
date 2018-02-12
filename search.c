//this searches txt files for character strings
//does not work yet
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char string[500];
    int line = 1;
    int nostring = 0;
    if(argc < 3 || argc > 3){
        printf("usage:  %s {filename.txt} {\"character string\"}\ninstead you had %s %s %s", argv[0], argv[0], argv[1], argv[2]);
        exit(EXIT_FAILURE);
    }
    
    if( ( fp = fopen(argv[1], "r") ) == NULL){
        printf("cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while( ( fgets(string, 500, fp) ) != NULL){
        if(strstr(string, argv[2]) != NULL){
            printf("your string was found on line %d\n", line);
            printf("which reads:\n%s\n", string);
            nostring = 1;
        }
        line++;
    }
    if(nostring == 0){
        printf("couldn't find your string in the text document\n");
    }
    fclose(fp);

    return(0);
}