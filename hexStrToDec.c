	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int hexStrToDec(char *hex);
int main()
{
   int num;
   char hex[100];
   
   printf("Enter a hexadecimal number: \n"); 
   scanf("%s",&hex);
   num=hexStrToDec(hex);
   printf("hexStrToDec(): %d\n", num);
   return 0;
}
int hexStrToDec(char *hex)
{
	/*edit*/
   /* Write your code here */        
    int ans ;
    sscanf(hex,"%X",&ans);
    return ans;

	/*end_edit*/
}