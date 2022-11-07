	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main()
{
	/*edit*/
   /* Write your code here */
    int x,cat;
    printf("Please enter the list price:\n");
    scanf("%d",&x);
    printf("Please enter the category:\n");
    scanf("%d",&cat);
    double res;
    res = 0.9 * x;
    if(res > 100000) res *= 1.13;
    else res *= 1.03;
    switch (cat){
        case 1: res += 70000; break;
        case 2: res += 80000; break;
        case 3: res += 23000; break;
        case 4: res += 600; break;
    }
    printf("Total price is $%.2lf\n", res);
	/*end_edit*/
   return 0;  
}