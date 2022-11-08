	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
    printf("Enter a number:\n");
    int i;
    double x; scanf("%lf",&x);
    double ans = 1;
    double cur = 1;
    for(i=1; i<=20; i++){
        cur *= -x;
        cur /= i;
        ans += cur;
    }
    printf("Result = %.2lf\n",ans);
	/*end_edit*/
   return 0;  
}