	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    printf("Enter the height:\n");
    int x; scanf("%d",&x);
    printf("The pattern is:\n");
    int i,j;
    for(i=0; i<x; i++){
        for(j=0; j<=i; j++){
            printf("%c",((i+j)%2?'B':'A'));
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;
}