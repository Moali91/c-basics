#include <stdio.h>

void minimax(int * array , int size, int* min, int* max);
int main () {
  int min, max;
  int array []={34 ,54 ,2 ,30 ,90};
  minimax(array ,5, &min,&max);

  printf("max = %d \n", max);
 return 0;
}
void minimax(int* array , int size, int* min, int* max) {
  
   *min = *array;
   *max = *array;
   
   for (int i = 0; i < size; i++) { //loop and see if there are smaller numbers
     if (*(array+i) < *min){
	*min  =*(array+1);
     }

     if (*(array+i) > *max) {
       *max  = *(array+i);

     }
   }
}
    
    
