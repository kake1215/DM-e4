#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand((unsigned int)time(NULL));
  int num1,num2,total;
  num1=rand()%6+1;
  num2=rand()%6+1;
  total=num1+num2;
  
  printf("Rolling the dice..\n");
  printf("Dice 1: %d\n",num1);
  printf("Dice 2: %d\n",num2);

  printf("Total value: %d\n",total);

  return 0;
}
