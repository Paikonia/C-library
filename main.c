#include <stdio.h>
#include <stdlib.h>
#include "Abstraction.h"
#include <assert.h>
char projName[];

Employee *input;
int main()
{
   int c = 0;
   while(c==0){
         int action;
         printf("What action do you want to perform? Choose a number.\n 1. Add employees. \n2.Show list of employees\n3. Quite.\n");
         scanf("%d", &action);
         assert(action>0&& action<=3);
         int a;
         int si = sizeof(input)/sizeof(input[0]);
         printf("Action number %d\n", a);
         switch(action){
        case 1:
            printf("Please enter number of new employees.");
             scanf("%d", &a);
           loop(input, a);
           break;
         case 2:
            deferer(input, si);
          break;
        case 3:
            c=1;
        break;
   }
}
}
