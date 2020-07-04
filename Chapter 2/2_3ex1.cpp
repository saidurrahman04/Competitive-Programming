#include<stdio.h>

int main(){

  int num;

  scanf("%d", &num);

  if (num % 10 == num){
    printf("%d is a single digit and hence it is a Palindrome\n", num);
  }
  else{

    int onesDigit, tensDigit;

    onesDigit = num / 10;
    tensDigit = num % 10;

    if(onesDigit == tensDigit){
      printf("%d is a Palindrome", num);
    }
    else{
      printf("%d is NOT a Palindrome", num);
    }
  }

return 0;
}
