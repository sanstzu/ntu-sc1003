	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main() 
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;

   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize); 
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);     
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize) 
{
	/*edit*/
   /* Write your code here */
int i,j,cnt;
    for(i=0; i<rowSize; i++){
        cnt = 1;
        for(j=1; j<colSize; j++){
            if(data[i][j] == data[i][j-1]) cnt++;
            else {
                printf("%d %d ", data[i][j-1], cnt);
                cnt = 1;
            }
        }
        printf("%d %d\n", data[i][colSize-1], cnt);
    }


	/*end_edit*/
}