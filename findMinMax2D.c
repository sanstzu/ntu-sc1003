	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);
int main()
{
   int A[5][5];
   int i,j,min,max;  
   
   printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
   for (i=0; i<5; i++)
      for (j=0; j<5; j++)
         scanf("%d", &A[i][j]);
   findMinMax2D(A, &min, &max);
   printf("min = %d\nmax = %d", min, max);   
   return 0;          
}
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
	/*edit*/
   /* Write your code here */ 
   *min = 1e9;
   *max = -1e9;
    int i,j;
    for(i = 0; i < SIZE; i++) for(j=0; j<SIZE; j++) {
        *min = (*min > ar[i][j]) ? ar[i][j] : *min;
        *max = (*max < ar[i][j]) ? ar[i][j] : *max;
    }

	/*end_edit*/
}