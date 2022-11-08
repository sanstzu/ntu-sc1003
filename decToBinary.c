	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   /* Write your code here */
    int res[150];
    int x;
    printf("Enter a decimal number:\n");
    scanf("%d",&x);
    printf("The equivalent binary number: ");
    int cnt = 0;
    while(x>0){
        res[cnt++] = x%2;
        x>>=1;
    }
    cnt--;
    while(cnt>=0){
        printf("%d",res[cnt--]);
    }
	/*end_edit*/
   return 0;  
}