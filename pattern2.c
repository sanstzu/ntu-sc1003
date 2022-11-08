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
    int i,j,k;
    for(i=0; i<x; i++){
        for(j=0; j<x-i-1; j++) printf(" ");
        for(j=i+1,k=0; k<i+1; k++, j = (j+1)%10){
            printf("%d",j);
        }
        j = (j+8)%10;
        for(k=0; k<i; k++, j = (j+9)%10){
            printf("%d",j);
        }
        for(j=0; j<x-i-1; j++) printf(" ");
        printf("\n");
    }

	/*end_edit*/
   return 0;  
}