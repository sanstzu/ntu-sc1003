	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main() 
{
   char a[80],b[80];
   char ch, *p;
   
   printf("Enter a string: \n");  
   fgets(a, 80, stdin);
   if (p=strchr(a,'\n')) *p = '\0'; 
   printf("Enter a character to be inserted: \n");  
   ch = getchar();
   insertChar(a,b,ch);
   printf("insertChar(): ");  
   puts(b);     
   return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
	/*edit*/
  /* Write your code here */
    int cnt = 0;
    while(*str1 != '\0'){
        *str2++ = *str1++;
        if(cnt == 2) *str2++ = ch;
        cnt = (cnt+1)%3;
    }
    *str2 ='\0';
	/*end_edit*/
}