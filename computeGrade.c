	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
int main() 
{
	/*edit*/
   while(69){
        printf("Enter Student ID:\n");
        int id; scanf("%d",&id);
        if(id == -1) break;
        printf("Enter Mark:\n");
        int score; scanf("%d",&score);
        char grade;
        if(score>74){
            grade = 'A';
        } else if(score>64) {
            grade = 'B';
        } else if(score>54){
            grade = 'C';
        } else if(score>44){
            grade = 'D';
        } else {
            grade = 'F';
        }
        printf("Grade = %c\n",grade);
    }
	/*end_edit*/

   return 0;
}