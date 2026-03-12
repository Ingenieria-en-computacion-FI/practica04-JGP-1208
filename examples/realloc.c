#include <stdio.h>
#include <stdlib.h>




int main (){
 int *array, *array2;
 int num;
  printf("¿Cuantos elementos tiene el conjunto?\n");
 scanf("%d", &num);
 array = (int*) malloc(sizeof(int)*num);
  if (array!=NULL) {
   printf("[ ");
   for(int i=0; i < num; i++)
   printf("%d ", *(array + i));
   printf("]\n");


   array2 = (int*) realloc(array, (2*num)*sizeof(int));
    if (array2!=NULL) {
       for(int i=0; i < num; i++)
       scanf("%d ", *(array2 + i));
       printf("[ ");
       for(int i=0; i < num; i++)
       printf("%d ", *(array2 + i));
       printf("]\n");
     }
  
   free(array2);
 }
 return 0;
}
