	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
int main() 
{
	/*edit*/
   /* Write your code here */
    int a[2], b[2], c[2],i;
    double x,y;
    printf("Enter a1,b1,c1,a2,b2,c2:\n");
    for(i=0; i<2; i++) scanf("%d %d %d", &a[i], &b[i], &c[i]);
    x = ((double)b[1]*c[0] - b[0]*c[1])/(a[0]*b[1] - a[1]*b[0]);
    y = ((double)a[0]*c[1] - a[1]*c[0])/(a[0]*b[1] - a[1]*b[0]);
    if((a[0]*b[1] - a[1]*b[0]) == 0) printf("Denominator is zero!\n");
    else printf("x=%.2lf,y=%.2lf\n",x,y);

	/*end_edit*/
   return 0;
}