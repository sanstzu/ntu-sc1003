	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
int main()
{       
	/*edit*/
   /* Write your code here */
    printf("Enter a binary number:\n");
    char num[40];
    scanf("%s", num);
    int n = strlen(num);
    char *ptr = num;
    n--;
    int ans = 0;
    while(*ptr != '\0'){
        ans += (*ptr - '0')*(1<<n--);
        ptr++;
    }
    printf("The equivalent octal number: %o",ans);
	/*end_edit*/
   return 0;  
}