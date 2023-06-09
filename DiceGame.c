#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 6
#define MIN 1
#define RANGE ((MAX)-(MIN)+1)

int main(){


  int dice ;
  int sum = 0;
  printf("Rolling dice...\n");
  srand((unsigned int)time(NULL));
    
  for(int i=1;i<=2;i++){
    dice = MIN + rand()%RANGE;
    printf("Die %d: %d\n",i,dice);
    sum+=dice;

  }

  printf("Total value: %d\n",sum);



  return 0;
}
