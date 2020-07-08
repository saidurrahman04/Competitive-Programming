#include<stdio.h>

int main(){


//========== odd numbers from 1 to 10 ==========

for(int i = 1; i <= 10; i++){

  //if even, continue the loop, don't go down
  if(i % 2 == 0) {
    continue;
  }

  printf("%d\n",i);
}

printf(" \n");

 // ========== print number 1 to 3 ONLY ==========

for(int i = 1; i <= 10; i++){

  //if greater than 5, then break the loop

  if(i > 3) {
    break;
  }

  printf("%d\n",i);
}



return 0;
}
