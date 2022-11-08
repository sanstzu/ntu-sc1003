	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main() 
{
   char str1[50],str2[50],str3[50];
   
   printf("Enter str1: \n");
   scanf("%s",str1);
   printf("Enter str2: \n");   
   scanf("%s",str2);
   strIntersect(str1, str2, str3);
   if (*str3 == '\0')
      printf("strIntersect(): null string\n");
   else
      printf("strIntersect(): %s\n", str3);  
   return 0;
}
void strIntersect(char *str1, char *str2, char *str3)
{
	/*edit*/
   /* Write your code here */
    char *ptr1, *ptr2;
    ptr1 = str1;
    while(*ptr1 != '\0'){
        ptr2 = str2;
        int flag = 0;
        while(!flag && *ptr2 != '\0'){
            flag = *(ptr2++)==*ptr1;
        }
        if(flag)*(str3++)=*ptr1;
        ptr1++;
    }
    *str3 = '\0';

	/*end_edit*/
}