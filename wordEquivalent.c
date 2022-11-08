	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void wordEquivalent(int num, char *str);
int main()
{
   int num;
   char str[40]="";
   
   printf("Enter the number: \n");        
   scanf("%d", &num);
   wordEquivalent(num, str);
   printf("wordEquivalent(): %s", str);   
   return 0;
}
void wordEquivalent(int num, char *str)
{
	/*edit*/
   /* Write your code here */
   char* we[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(num > 99) strcpy(str,"Input exceeds 99");
    else {
        while(num > 0){
            int len = strlen(we[num%10]);
            memcpy(str,we[num%10],sizeof(we[num%10]));
            str += len;
            *(str++) = ' ';
            num /= 10;
        }
        *str = '\0';
    }

	/*end_edit*/
}