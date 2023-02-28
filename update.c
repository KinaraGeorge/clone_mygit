#include <stdio.h>
#include <stdlib.h>
//use of memory allocation specifically malloc
int main(void) {
   int n; //stores number of items to go on an array
   printf("How many items: ");
   scanf("%d", &n);
   
   //allocate memory for the array
   int *arr = (int*)malloc(n * sizeof(int));
   
   //check if memory was allocated
   if (arr == NULL) {
       printf("memory allocation failed!\n");
       return 1;
   }
   
   //add the item to the array
   printf("Add values at: \n");
   for (int i=0; i<n; i++) {
       printf("%d = ", i+1);
       scanf("%d", &arr[i]);
   }
   
   //display items in the array
   printf("The items in the array are: ");
   for (int i=0; i<n; i++) {
       if ((arr[i] != arr[n-1]) && (arr[i] != arr[n-2])) { //adding commas to values
           printf("%d, ", arr[i]);
       } else {
           if (arr[i] != arr[n-1]) {  
               printf("%d ", arr[i]);
           } else {
               printf("and %d", arr[i]);
           }
       }
       
   }
   return 0;
}
