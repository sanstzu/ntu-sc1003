	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int platform1D(int ar[], int size);
int main() 
{
   int i,b[50],size;

   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++) 
      scanf("%d",&b[i]);
   printf("platform1D(): %d\n", platform1D(b,size));
   return 0;
}
int platform1D(int ar[], int size)
{
	/*edit*/
   /* Write your code here */
    int ans = 1,i, cur = 1;
    for(i=1; i<size; i++){
        if(ar[i] == ar[i-1]) cur++;
        else cur = 1;
        ans = (ans < cur?cur:ans);
    }
    return ans;
    

	/*end_edit*/
}