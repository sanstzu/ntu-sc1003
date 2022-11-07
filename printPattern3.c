	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main()
{
	/*edit*/
   /* Write your code here */
    int x,i,j;
    printf("Enter the height:\n");
    scanf("%d",&x);
    printf("The pattern is:\n");
    for(i=1; i<=x; i++){
        for(j=0; j<i; j++){
            printf("%d",(i+j)%10);
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;
}