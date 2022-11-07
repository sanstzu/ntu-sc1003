	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
   int power;
   float number, result=-1;
   
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                          
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);              
   return 0;
}
float power1(float num, int p)
{
	/*edit*/
   /* Write your code here */
    if(p < 0) return power1(1/num,-p);
    if(p==0) return 1;
    else if(p%2){
        return num * power1(num,p-1);
    } else {
        float ans = power1(num,p>>1);
        return ans * ans;
    }

	/*end_edit*/
}
void power2(float num, int p, float *result)
{
	/*edit*/
   /* Write your code here */
    *result = power1(num,p);

	/*end_edit*/
}