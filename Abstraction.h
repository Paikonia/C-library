#include <stdio.h>
#include <stdlib.h>
#include "Vect.h"

Employee *loop(Employee *h, int number){
  for(int i = 0;i<number; i++){
    Employee add;

    printf("Please enter first name. \n");
    scanf("%s", &add.firstName);
    printf("Please enter last name. \n");
    scanf("%s", &add.lastName);
    printf("Please enter age. \n");
    scanf("%d", &add.age);
    printf("Please enter Position. \n");
    scanf("%s", &add.Position);
    printf("Please enter height. \n");
    scanf("%lf", &add.height);
    h = addData(add);
  }

}

void deferer(Employee *em, int s){

for(int i=0; i<s; i++){
    printf("Name: %s %s, index: %d", em->firstName, em->lastName, i);

}

}
