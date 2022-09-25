#include <stdio.h>
#include <string.h>

int main() {
    char Fname[10];
    char Lname[10];
    char fullname[11];
    int i, j;

    printf("Enter First Name ");
    scanf("%s", Fname);
    printf("The first name is: %s \n", Fname);
    printf("The length of the first name is: %d \n", strlen(Fname));

    printf("Enter Last Name ");
    scanf("%s", Lname);
    printf("The last name is: %s \n", Lname);
    
    for(i=0 ; i<5 ; i++)
    {
        fullname[i]=Fname[i];
    } 

    fullname[5]= '  ';

    for(i=0 ; i<5 ; i++)
    {
        fullname[i+6]=Lname[i];
    }
    printf("The full name is: %s \n", fullname);
}

