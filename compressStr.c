	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compressStr(char *str);
int main() 
{
   char str[40]; 
         
   printf("Enter a sequence of characters: \n"); 
   scanf("%s", str);
   printf("compressStr(): ");
   compressStr(str);
   return 0;
}
void compressStr(char *str)
{
	/*edit*/
/* Write your code here */
    char ans[40],prev = str[0];
    char tmp[40];
    ans[0] = '\0';
    int cnt = 1;
    int n = strlen(str);
    int i = 1;
    while(i<n){
        if(str[i] != str[i-1]){
            if(cnt == 1) sprintf(tmp,"%c", str[i-1]);
            else sprintf(tmp,"[%d%c]",cnt, str[i-1]);
            strcat(ans,tmp);
            cnt = 1;
        } else {
            cnt++;
        }
        i++;
    }
    if(cnt == 1) sprintf(tmp,"%c", str[i-1]);
    else sprintf(tmp,"[%d%c]",cnt, str[i-1]);
    strcat(ans,tmp);
    printf("%s",ans);
	/*end_edit*/
}