	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{     
	/*edit*/
   /* Write your code here */
    int t,i,j;
    printf("Enter number of lines:\n");
    scanf("%d",&t);
    for(i=0; i<t; i++){
        printf("Enter line %d:\n",i+1);
        int n,tmp; scanf("%d",&n);
        int ans = 0;
        for(j=0; j<n; j++){
            scanf("%d",&tmp);
            ans += tmp;
        }
        printf("Total: %d\n",ans);
    }

	/*end_edit*/
   return 0;
}