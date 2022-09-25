// Aneesh

#include <stdio.h>



struct Person {

    char name[10];

    int race;

    char age[10];

    int origin;

}  ;



int main() {

    struct Person st[10];

    int i;

    for (i=0; i<2; i++) {

    printf("Enter Person's Name: ");

    scanf("%s", &st[i].name);

    

    fflush(stdin);

    printf("Enter Person's Race: ");

    scanf("%d", &st[i].race);

    

    fflush(stdin);

    printf("Enter Person's Age: ");

    scanf("%s", &st[i].age);

    

    fflush(stdin);

    printf("Enter Person's Place of Origin: ");

    scanf("%d", &st[i].origin);

}



    printf("Details of the Person\n");

    for(i=0; i<2; i++) {

        printf("Name : %s\n",

st[i].name);

        printf("Race : %d\n",

st[i].race);

        printf("Age : %s\n",

st[i].age);

        printf("Place of Origin : %d\n",

st[i].origin);

    }

}

