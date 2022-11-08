	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void extractFirstChar(char *str1, char *str2);
int main()
{
   char str1[80], str2[80], *p;
   
   printf("Enter a string: \n");
   fgets(str1, 80, stdin);
   if (p=strchr(str1,'\n')) *p = '\0';  
   extractFirstChar(str1, str2); 
   printf("extractFirstChar(): %s\n", str2);
   return 0;
}    
void extractFirstChar(char *str1, char *str2)  
{
	/*edit*/
   /* Write your code here */
    char prev = ' ';
    while(*str1 != '\0'){
        if((('a' <= *str1 && *str1 <= 'z') || ('A' <= *str1 && *str1 <= 'Z')) && prev == ' ') *(str2++) = *str1;
        prev = *(str1++);
    }
    *str2 = '\0';
	/*end_edit*/
}