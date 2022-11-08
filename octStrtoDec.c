	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int octStrTodec(char *str);
int main()
{
   char str[20],*sp;
   int num;
   
   printf("Enter an octal number: \n");
   scanf("%s",str);
   num=octStrTodec(str);
   printf("octStrTodec(): %d\n",num);
   return 0;
}
int octStrTodec(char *str) 
{
	/*edit*/
   /* Write your code here */
    char *ptr = str;
    int cur = 1;
    int ans = 0;
    while(*(ptr+1) != '\0') ptr++;
    while(69){
        ans += cur * (*ptr - '0');
        cur *= 8;
        if(ptr == str) break;
        ptr--;
    }
    return ans;
	/*end_edit*/
}