	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define N 20
int main() 
{
   int a[N],i,j,k,m;
   int size;
	/*edit*/
   /* Write your code here – for additional local variables */


	/*end_edit*/

   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)
      scanf("%d", &a[i]);
   printf("Result: \n");

	/*edit*/
   /* Write your code here */
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d",a[(-i+j-1+size)%size]);
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;
}