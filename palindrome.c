	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1000
int palindrome(char *str);
int main()
{
   char str[80], *p;
   int result = INIT_VALUE;
   
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0'; 
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");    
   else 
      printf("An error\n");      
   return 0;
}
int palindrome(char *str)
{
	/*edit*/
   char *ptr, * ptr_end;
   int cnt,i;
   cnt = 0;
   ptr = ptr_end = str;
   while(*ptr_end != '\0') {ptr_end++; cnt++;}
   ptr_end--; cnt--;
   for(i = 0; i < cnt; i++){
       if(*ptr != *ptr_end) return 0;
       ptr++; ptr_end--;
       cnt--;
   }
   return 1;
   
	/*end_edit*/
}