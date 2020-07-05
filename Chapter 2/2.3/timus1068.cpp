#include<stdio.h>

int main(){

  int num, sum;

  scanf("%d", &num);

  if(num <= 0 ){
    num = -1 * (num);
    sum = -1 * num*(num+1)/2;
    sum++;
    printf("%d", sum);
  }
  else{
    sum = num*(num+1)/2;
    printf("%d", sum);
  }

return 0;
}
