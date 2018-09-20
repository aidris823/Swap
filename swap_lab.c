#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int ary[10];
  for (int i = 0; i < 10; i++){
    int RAND_PAUL = rand();
    ary[i] = RAND_PAUL;    
  }
  ary[9] = 0;
  for (int i = 0; i < 10; i++){
    printf("The %d value: %d",i,ary[i]);
    printf("\n");
  }

  //The Hard Part:
  int revary[10];
  for (int i = 0; i<  10; i++){
    *(revary+i) = *(ary + 9 - i);
    printf("The reverse of value of #%d : %d \n",i,*(revary+i));
  }
  
}
  
