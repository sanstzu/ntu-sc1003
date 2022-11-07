	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
    double gp,tx,np;
    int hours;
    printf("Enter hours of work:\n");
    scanf("%d", &hours);
    if(hours <= 40){
        gp = 6.00 * hours;
    } else {
        gp = 6.00 * 40;
        gp += 1.5 * 6.00 * (hours-40);
    }
    
    if(gp <= 1000){
        tx = 0.1 * gp;
    } else if (gp <= 1500){
        tx = 0.1 * 1000;
        tx += 0.2 * (gp-1000);
    } else {
        tx = 0.1*1000 + 0.2 * 500;
        tx += 0.3 * (gp-1500);
    }
    
    printf("Gross pay=%.2f\nTax=%.2f\nNet pay=%.2f\n",gp,tx,gp-tx);
    

	/*end_edit*/
   return 0;  
}