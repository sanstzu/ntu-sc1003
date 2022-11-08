	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
    int x;
    printf("Enter a binary number:\n");
    scanf("%d",&x);
    int ans = 0, cnt = 0;
    while(x>0){
        ans += (1<<cnt)*(x%2);
        cnt++; x /= 10;
    }
    printf("The equivalent decimal number: %d\n",ans);

	/*end_edit*/
   return 0;  
}