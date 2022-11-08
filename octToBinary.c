	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   /* Write your code here */
    printf("Enter an octal number:\n");
    int x;
    scanf("%o",&x);
    char ans[40];
    int i = 0;
    while(x > 0){
        ans[i++] = x%2+'0';
        x>>=1;
    }
    printf("The equivalent binary number: ");
    i--;
    while(i>=0){
        printf("%c",ans[i--]);
    }

	/*end_edit*/
   return 0;  
}