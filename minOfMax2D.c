	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main() 
{
   int ar[SIZE][SIZE], rowSize, colSize;
   int i,j,min;
   
   printf("Enter row size of the 2D array: \n");
   scanf("%d", &rowSize);
   printf("Enter column size of the 2D array: \n");
   scanf("%d", &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &ar[i][j]);
   min=minOfMax2D(ar, rowSize, colSize);
   printf("minOfMax2D(): %d\n", min);
   return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
	/*edit*/
   /* Write your code here */
    int tmp_max, ans=1e9,i,j;
    for(i=0; i<rowSize; i++){
        tmp_max = ar[i][0];
        for(j=1; j<colSize; j++) tmp_max = (tmp_max < ar[i][j]? ar[i][j] : tmp_max);
        ans = (ans > tmp_max ? tmp_max : ans);
        
    }

	/*end_edit*/
}