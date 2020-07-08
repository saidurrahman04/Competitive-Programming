#include<stdio.h>

int main(){

// EOF ==> End Of File

int a;

while(scanf("%d",&a) != EOF){
  //if the input number if `0`, then break the loop
  if(a==0){
    break;
  }
  printf("%d\n",a);
}

return 0;
}
