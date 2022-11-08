	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int reverseDigits(int num);
int main()
{
int num, result=999;
printf("Enter a number: \n");
scanf("%d", &num);
printf("reverseDigits(): %d\n", reverseDigits(num));
return 0;
}
int reverseDigits(int num)
{
	/*edit*/
/* Write your code here */
    int ans = 0;
    while(num > 0){
        ans += num%10;
        num /= 10; ans *= 10;
    }
    return ans/10;

	/*end_edit*/
}