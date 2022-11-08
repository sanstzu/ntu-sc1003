	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void sortCharStr(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   sortCharStr(str);
   printf("sortCharStr(): %s\n", str);
   return 0;
}
void sortCharStr(char *str)
{
	/*edit*/
/* Write your code here */
    int i,j,n = strlen(str);
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(str[j] > str[j+1]){
                char temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
    }

	/*end_edit*/
}