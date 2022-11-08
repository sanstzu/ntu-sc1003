	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define N 20
void largeCharStr(char str[N][20], char a[N], int size);
int main()
{
   char str[N][20],dummy;
   char a[N],i,j,size;
   
   printf("Enter number of strings: \n");
   scanf("%d", &size);
   scanf("%c", &dummy);
   for (i=0;i<size;i++){
      printf("Enter string %d: \n", i+1);
      scanf("%s",str[i]);
   }
   largeCharStr(str,a,size);
   printf("largeCharStr(): \n");
   for (i=0;i<size;i++) {
      printf("String %d: ",i+1);
      printf("%c\n",a[i]);
   }
   return 0;
}
void largeCharStr(char str[N][20], char a[N], int size)
{
	/*edit*/
   /* Write your code here */
    int i;
    for(i=0; i<size; i++){
        char *ptr;
        ptr = str[i];
        a[i] = *ptr;
        while(*ptr != '\0'){
            a[i] = (a[i] < *ptr ? *ptr : a[i]);
            ptr++;
        }
    }

	/*end_edit*/
}