	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    double sum = 1;
    double x;
    double cur = 1;
    printf("Enter x:\n");
    scanf("%lf",&x);
    for(int i=1; i<=10; i++){
        cur *= x;
        cur /= i;
        sum += cur;
    }
    printf("Result = %.2lf", sum);
	/*end_edit*/

   return 0;
}