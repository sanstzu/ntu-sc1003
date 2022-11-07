	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main() 
{
   char str[80], *p;
   
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0'; 
   printf("maxCharToFront(): ");  
   maxCharToFront(str); 
   puts(str);
   return 0;
}
void maxCharToFront(char *str) 
{
	/*edit*/
   /* Write your code here */
    char *max, *ptr;
    *max = 0;
    ptr = str;
    while(*ptr != '\0'){
        if(*ptr > *max) max = ptr;
        ptr++;
    }
    char tmp = *max;
    *max = '\0';
    memcpy(str+1,str,strlen(str));
    *str = tmp;

	/*end_edit*/
}