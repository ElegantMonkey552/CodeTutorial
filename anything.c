// Aneesh

#include <stdio.h>

//helloworldkhhkhkhjjkjhhjhjkjhjhjhjhjkhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

struct Person {

    char name[10];

    int Surname;


}  ;



int main() {

    struct Person st[10];

    int i;

    for (i=0; i<2; i++) {

    printf("Enter Person's Name: ");

    scanf("%s", &st[i].name);

    

    fflush(stdin);

    printf("Enter Person's Surname: ");

    scanf("%d", &st[i].Surname);

    


}



    printf("Details of the Person\n");

    for(i=0; i<2; i++) {

        printf("Name : %s\n",

st[i].name);

        printf("Surname : %d\n",

st[i].Surname);


    }

}

