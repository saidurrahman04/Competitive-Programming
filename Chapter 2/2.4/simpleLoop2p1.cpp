#include<stdio.h>

int main(){

//counts how many 2s divide 100

int x = 100;
int count = 0;

while(x % 2 == 0){
  count++;
  x /= 2;
}

printf("%d\n", count);

return 0;
}
