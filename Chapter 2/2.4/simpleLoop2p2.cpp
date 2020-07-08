#include<stdio.h>

int main(){

//finds out highest number which is power of 2 and less than 1000

int x = 1;

while(x * 2 < 1000){
  x = x * 2;
}

printf("%d\n", x);

return 0;
}
