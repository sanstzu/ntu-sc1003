	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{ 
   int num;
   char roman[10];
   printf("Enter a Roman number: \n");
   scanf("%s",roman);
   num = romanNum(roman);
   printf("romanNum(): %d\n", num);
   return 0;
}
int romanNum(char *str)
{        
	/*edit*/
   /* Write your code here */
    int ans = 0;
    while(*(str++) == 'X') ans += 10;
    str--;
    if(strcmp(str,"IX")==0) ans += 9;
    else if(strcmp(str,"IV")==0) ans += 4;
    else {
        while(*str != '\0'){
            if(*str == 'V') ans += 5;
            else if (*str =='I') ans += 1;
            str++;
        }
    }
    return ans;
	/*end_edit*/
}