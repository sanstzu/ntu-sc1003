	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
char *sweepSpace(char *str);
int main()
{
   char str[80], *p;
 
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0'; 
   printf("sweepSpace(): %s\n", sweepSpace(str));
   return 0;
}
char *sweepSpace(char *str)  
{
	/*edit*/
   /* Write your code here */
    char *temp;
    char ans[80];
    int ptr = 0;
    temp = str;
    while(*temp != '\0'){
        if(*temp == ' ' || *temp == '\t') {temp++;continue;}
        ans[ptr++] = *temp;
        temp++;
    }
    ans[ptr] = '\0';
    temp = &ans[0];
    return temp;
	/*end_edit*/
}