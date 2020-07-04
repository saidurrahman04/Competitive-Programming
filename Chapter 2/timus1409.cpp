#include<stdio.h>

int main(){

  int h, l, numCans;
  /* h--> number of cans shot by Harry
    l --> number of cans shot by Larry
  */
  scanf("%d %d", &h, &l);

  numCans = (h+l)-1;

  int h_not = numCans - h;
  int l_not = numCans - l;

  /* h_not --> number of cans NOT shot by Harry
    l_not --> number of cans NOT shot by Larry
  */

  printf("%d %d", h_not, l_not);

  return 0;
}
