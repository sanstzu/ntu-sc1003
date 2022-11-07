	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    int x,i,j;
    printf("Enter a number (between 1 and 9):\n");
    scanf("%d",&x);
    printf("Multiplication Table:\n  ");
    for(i=1; i<=x; i++) printf("%d ",i);
    printf("\n");
    for(i=1; i<=x; i++){\
        printf("%d ",i);
        for(j=1; j<=i; j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;  
}