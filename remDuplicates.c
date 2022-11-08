	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define N 20
int remDuplicates(int a[], int size);
int main()
{
   int a[N],i,size;
   
   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data:\n",size);
   for (i=0; i<size; i++)
      scanf("%d",&a[i]);    
   size=remDuplicates(a,size);
   printf("remDuplicates(): \n");
   for (i=0; i<size; i++) 
      printf("%d ",a[i]);
   printf("\n");
   return 0;
}
int remDuplicates(int a[], int size)
{
	/*edit*/
   /* Write your code here */
    int res[size], ptr = 0,i;
    for(i=1; i<size; i++){
        if(a[i]!=a[i-1]) res[ptr++] = a[i-1];
    }
    res[ptr++] = a[size-1];
    memcpy(a,res,sizeof(res));
    return ptr;

	/*end_edit*/
}