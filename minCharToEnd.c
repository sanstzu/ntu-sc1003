	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   minCharToEnd(str); 
   printf("minCharToEnd(): %s",str);  
   return 0;
}
void minCharToEnd(char *str) 
{   
	/*edit*/
/* Write your code here */
    char *min, *ptr;
    ptr = str;
    min = str;
    while(*ptr != '\0'){
        if(*ptr < *min) min = ptr;
        ptr++;
    }
    char tmp = *min;
    
    memcpy(min,(min+1),strlen(min+1));
    *(ptr-1) = tmp;
	/*end_edit*/
}