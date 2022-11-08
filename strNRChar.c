	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>   
#include <string.h>
char *strNRChr(char *str, int n, char ch);
int main()
{
   char str[80], ch, dummy;
   char *temp=NULL;  
   int n;

   printf("Enter a string: \n");
   scanf("%s",str); 
   scanf("%c",&dummy); 
   printf("Enter a char: \n");
   scanf("%c",&ch);    
   printf("Enter the occurrence: \n");
   scanf("%d", &n);    
   temp = strNRChr(str, n, ch); 
   if (temp!=NULL)  
      printf("strNRChr(): %s\n", temp);   
   else 
      printf("strNRChr(): null string\n");
   return 0;
}
char *strNRChr(char *str, int n, char ch)
{ 
	/*edit*/
/* Write your code here */
    char *ptr;
    ptr = str + strlen(str);
    do {
        if(*ptr == ch) n --;
        if(n==0) return ptr;
    } while ((ptr--) != str);
    
    return NULL;

	/*end_edit*/
}