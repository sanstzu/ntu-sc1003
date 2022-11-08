	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void decTohexStr(char *str, int num);
int main()
{
   int num,i;
   char str[20];
   printf("Enter a decimal number: \n");
   scanf("%d",&num);
   decTohexStr(str,num);
   printf("decTohexStr(): ");
   printf("%s\n",str);
   return 0;
}
void decTohexStr(char *str, int num)
{
	/*edit*/
   /* Write your code here */
    sprintf(str,"%X",num);

	/*end_edit*/
}