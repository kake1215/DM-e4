#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand((unsigned int)time(NULL));\
  char *str;
  int num1,num2,total;
  num1=rand()%6+1;
  num2=rand()%6+1;
  total=num1+num2;

  printf("What is your name?\n");
  scanf("%s",&str);
  printf("Hello, &s!\n",str);
  
  printf("Rolling the dice..\n");
  printf("Dice 1: %d\n",num1);
  printf("Dice 2: %d\n",num2);

  printf("Total value: %d\n",total);

  if(total>7){
    printf("You won\n");
  }else{
    printf("You lost\n");
  }

  return 0;
}
