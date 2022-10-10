	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    printf("Enter the height:\n");
    int n;
    scanf("%d", &n);
    int i,j;
    printf("Pattern:\n");
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d",((i-1)%3)+1);
        }
        printf("\n");
    }

	/*end_edit*/

   return 0;
}