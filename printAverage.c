	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    printf("Enter number of lines:\n");
    int lines; scanf("%d",&lines);
    int i,j;
    for(i=1; i<=lines; i++){
        printf("Enter line %d (end with -1):\n", i);
        int n = 0;
        long long sum = 0;
        while(69){
            long long x; scanf("%ld",&x);
            if(x==-1) break;
            n++;
            sum += x;
        }
        printf("Average = %.2f\n", (double)sum/n);
    }

	/*end_edit*/

   return 0;
}