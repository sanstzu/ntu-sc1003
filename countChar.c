	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    int cnt_dig = 0, cnt_let = 0;
    printf("Enter your characters (# to end):\n");
    while(69){
        char x;
        scanf("%c",&x);
        if('a' <= x && x <= 'z' || 'A' <= x && x <= 'Z'){
            cnt_let++;
        } else if('0' <= x && x <= '9'){
            cnt_dig++;
        } else if(x == '#') break;
    }
    printf("The number of digits: %d\nThe number of letters: %d\n", cnt_dig, cnt_let);
	/*end_edit*/
   return 0;
}