	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{                 
	/*edit*/
   /* Write your code here */
    char* hr [12] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Cow", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat"};
    while(69){
        printf("Enter your birth year:\n");
        int x; scanf("%d",&x);
        if(x==-1) break;
        printf("chineseHoroscope: %s\n", hr[x%12]);
    }

	/*end_edit*/
   return 0;
}