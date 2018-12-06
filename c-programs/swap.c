#include <stdio.h>

int i;
int j;

void swap(int *pi, int *pj) {
  int temp = *pi;
  *pi = *pj;
  *pj = temp;

  return;
}

int main() {
 
  puts("enter 2 numbers");
  scanf("%d %d", &i,&j);
  printf("i = %d j = %d \n", i, j);
  swap (&i, &j );
  puts("we swaped these numbers");
  printf("i = %d, j = %d \n", i,j); 
 return 0;

}
