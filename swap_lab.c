#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  srand(time(NULL));
  // int RAND_PAUL = rand();
  int ary[10];
  for (int i = 0; i < 10; i++){
    ary[i] = rand();
  }
  ary[9] = 0;
  for (int i = 0; i < 10; i++){
    printf("The %d value: %d",i,ary[i]);
    printf("\n");
  }
}
  
