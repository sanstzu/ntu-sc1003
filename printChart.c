	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
void printChart(int x, int y, int z);
int main() 
{
   int x,y,z;

   printf("Enter 3 inputs: \n");
   scanf("%d %d %d", &x, &y, &z);
   printf("The bar chart is: \n");
   printChart(x,y,z);
   return 0;
}
void printChart(int x, int y, int z)
{
	/*edit*/
   /* Write your code here */
    int max = x;
    if(max < y) max = y;
    if(max < z) max = z;
    int i,j;
    for(i=max; i>0; i--){
        printf("%c",(x<i?' ':'*'));
        printf("%c",(y<i?' ':'*'));
        printf("%c\n",(z<i?' ':'*'));
    }

	/*end_edit*/
}