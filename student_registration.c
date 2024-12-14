#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    //variable declarations and initialization
    char code;
    char name[NAME_LEN+1], netid[NETID_LEN+1], cop2510_grade;
    double gpa;
    int attempts;
    struct student *registration = NULL;

    //print the menu to the user
    help();
    printf("\n");

    //for loop which iterates until the user terminates the program
    for (;;) {
        // read operation code
        printf("Enter operation code: ");
        scanf(" %c", &code);

        //while loop which iterates until the user enters the new-line character
        while(getchar() != '\n'); /* skips to end of line */

        // run operation
        switch (code) {
            //scenario if the user enters an h    
            case 'h':
                help();
                break;
            //scenario if the user enters an a    
            case 'a':
                read(name, netid, &cop2510_grade, &gpa, &attempts);
                registration = add_student(registration, name, netid, cop2510_grade, gpa, attempts);
                break;
            //scenario if the user enters a p    
            case 'p':
                registration = pop_student(registration);
                break;
            //scenario if the user enters a l
            case 'l':
                list_students(registration);
                break;
            //scenario if the user enters a g    
            case 'g':
                read(NULL, NULL, NULL, &gpa, NULL);
                list_gpa_min(registration, gpa);
                break;
            //scenario if the user enters a c
            case 'c':
                read(NULL, NULL, &cop2510_grade, NULL, NULL);
                list_cop2510_min(registration, cop2510_grade);
                break;
            //scenario if the user enters a q
            case 'q':
                registration = clear_queue(registration);
                return 0;
            //scenario if the user enters anything other than the letters above
            default:
                printf("Illegal operation code!\n");
        }
        printf("\n");
    }

    return 0;
}
