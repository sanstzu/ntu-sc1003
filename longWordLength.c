	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main() 
{
   char str[80], *p;
   
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';   
   printf("longWordLength(): %d\n", longWordLength(str));    
   return 0;
}
int longWordLength(char *s)
{
	/*edit*/
   /* Write your code here */
    int ans = 0;
    while(*s != '\0'){
        while(!(('a' <= *s && *s <= 'z') || ('A' <= *s && *s <= 'Z'))) s++;
        int cnt = 0;
        while(('a' <= *s && *s <= 'z') || ('A' <= *s && *s <= 'Z') ) {
            s++; cnt++;
        }
        ans = (ans < cnt? cnt : ans);
    }
    return ans;
	/*end_edit*/
}