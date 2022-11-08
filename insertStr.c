	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
char *insertStr(char *a, char *s);
int main()
{
   char a[40],s[40],*p;

   printf("Enter the string a: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the string s: \n");
   fgets(s, 40, stdin);  
   if (p=strchr(s,'\n')) *p = '\0';
   insertStr(a,s);
   printf("insertStr(): ");
   puts(a);   
   return 0;
}
char *insertStr(char *a, char *s)
{
	/*edit*/
/* Write your code here */
    char ans[40];
    strcpy(ans,a);
    strcat(ans,s);
    int i,j,n=strlen(ans);
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(ans[j] > ans[j+1]){
                char temp = ans[j];
                ans[j] = ans[j+1];
                ans[j+1] = temp;
            }
        }
    }
    strcpy(a,ans);
	/*end_edit*/
}