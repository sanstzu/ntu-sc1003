	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main() 
{
   char str[80], substr[80], *p; 
   int result=INIT_VALUE;
   
   printf("Enter the string: \n"); 
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n"); 
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0'; 
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);     
   return 0;
}
int countSubstring(char str[], char substr[])
{
	/*edit*/
	/* Write your code here */
	int cnt = 0;
    char *ptr1, *ptr2;
    while(*str != '\0'){
        ptr1 = substr;
        ptr2 = str;
        while(*ptr1 == *ptr2){
            ptr1++; ptr2++;
            if(*ptr1 == '\0') {cnt++; break;}
        }
        str++;
    }
    return cnt;

	/*end_edit*/
}