#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct{
char firstName[20];
char lastName[20];
char Position[12];
int age;
double height;
}Employee;

static int Capacity = 0;
static double GrowthRate = 1.5;
static Employee *Data = NULL;
static int vectorSize =0;
int startSize = 1;

void setGrowthRate(double rate){
 GrowthRate = rate;
}

int addData(Employee item){
    if(vectorSize == Capacity){
        int newSize = (Capacity==0)? startSize: (Capacity*GrowthRate+1);
        Employee *employ = realloc(Data, newSize*sizeof(Employee));
        if(employ==NULL){
            return -1;
        }
        Capacity=newSize;
        Data = employ;
        }
        Data[vectorSize] = item;
        return ++vectorSize;
}

Employee removeData(){
  assert(vectorSize > 0);
 return Data[--vectorSize];

}

Employee *getData(int index){
  assert(index>=0 && index<vectorSize);
  return Data+index;
}
