	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main() 
{
   char a[40],b[40];
   char c[40],*p;

   printf("Enter the first string: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the second string: \n");
   fgets(b, 40, stdin);  
   if (p=strchr(b,'\n')) *p = '\0';
   mergeStr(a,b,c);
   printf("mergeStr(): ");
   puts(c);   
   return 0;
}
void mergeStr(char *a, char *b, char *c)  
{   
	/*edit*/
/* Write your code here */
    while(*a != '\0' && *b != '\0'){
        if(*a < *b){
            *(c++) = *(a++);
        } else {
            *(c++) = *(b++);
        }
    }
    
    while(*a != '\0'){
        *(c++) = *(a++);
    }
    
    while(*b != '\0'){
        *(c++) = *(b++);
    }
    
    *c ='\0';

	/*end_edit*/
}