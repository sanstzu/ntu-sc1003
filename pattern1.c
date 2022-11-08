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
        for(j=0; j<x-i-1; j++)printf(" ");
        for(j=0; j<2*i+1; j++)printf("*");
        for(j=0; j<x-i-1; j++)printf(" ");
        printf("\n");
    }

	/*end_edit*/
   return 0;  
}