	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main() 
{
   int ar[50],i,size;
   
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++) 
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++) 
      printf("%d ",*(ar+i)); 
   return 0;
}
void swapMinMax1D(int ar[], int size)
{
	/*edit*/
  /* Write your code here */
    int max, maxp, minp, min;
    max = min = ar[0];
    maxp = minp = 0;
    int i;
    for(i=1; i<size; i++){
        if(max <= ar[i]){
            max = ar[i];
            maxp = i;
        }
        if(min >= ar[i]){
            min = ar[i];
            minp = i;
        }
    }
    int temp = ar[minp];
    ar[minp] = ar[maxp];
    ar[maxp] = temp;

	/*end_edit*/
}