	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);
int main()
{
   int m, n, q, r;
   
   printf("Enter two numbers (m and n): \n");
   scanf("%d %d", &m, &n);
   q = divide1(m, n, &r);
   printf("divide1(): quotient %d remainder %d\n", q, r);
   divide2(m, n, &q, &r);
   printf("divide2(): quotient %d remainder %d\n", q, r);
   return 0;
}
int divide1(int m, int n, int *r)
{
	/*edit*/
   /* Write your code here */
    int i=0;
    while(m >= n){
        i++;
        m-=n;
    }
    *r = m;
    return i;

	/*end_edit*/
}
void divide2(int m, int n, int *q, int *r)
{
	/*edit*/
   /* Write your code here */
    *q = divide1(m,n,r);

	/*end_edit*/
}