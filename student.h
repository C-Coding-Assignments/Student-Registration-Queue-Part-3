
#ifndef STUDENT
#define STUDENT

//////////////////////
// data definitions //
//////////////////////
#define NAME_LEN 101
#define NETID_LEN 41

//structure definition for a student
struct student {
    char name[NAME_LEN+1], netid[NETID_LEN+1], cop2510_grade;
    double gpa;
    int attempts;
    struct student *next;
};

/////////////////////////
// function prototypes //
/////////////////////////

//function prototype for help which prints the menu to the user
void help();
//function prototype for read which reads in information from the user for certain functions and for creating instances of student
void read(char *name, char *netid, char *cop2510_grade, double *gpa, int *attempts);
//function prototype for add_student which adds a student that the user creates to the linked list
struct student * add_student(struct student *registration, char *name, char *netid, char cop2510_grade, double gpa, int attempts);
//function prototype for pop_student which removes the first student within the linked list
struct student * pop_student(struct student *registration);
//function prototype for list_students which prints all the students within the linked list
void list_students(struct student *registration);
//function prototype for list_gpa_min which prints the students within the linked list that have a gpa greater than or equal to the minimum gpa that the user enters
void list_gpa_min(struct student *registration, double gpa);
//function prototype for list_cop2510_min which prints the students within the linked list that have a greater COP 2510 letter grade greater than or equal to the minimum letter grade that the user enters
void list_cop2510_min(struct student *registration, int cop2510_grade);
//function prototype for clear_queue which clears the dynamically allocated memory
struct student * clear_queue(struct student *registration);

#endif
