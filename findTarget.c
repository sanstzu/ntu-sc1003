	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999
void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);
int main()
{
   char nameptr[SIZE][80], t[40], *p;
   int size, result = INIT_VALUE;  
   int choice; 
   
   printf("Select one of the following options: \n");
   printf("1: readNames()\n");     
   printf("2: findTarget()\n");
   printf("3: printNames()\n");
   printf("4: exit()\n"); 
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            readNames(nameptr, &size);
            break;
         case 2:
            printf("Enter target name: \n");   
            scanf("\n");
            fgets(t, 80, stdin);
            if (p=strchr(t,'\n')) *p = '\0'; 
            result = findTarget(t, nameptr, size);
            printf("findTarget(): %d\n",  result);  
            break;    
         case 3:
            printNames(nameptr, size);
            break;
      }
   } while (choice < 4);      
   return 0;
}
void printNames(char nameptr[][80], int size)
{
	/*edit*/
   /* Write your program code here */
    int i = 0;
    for(i = 0; i<size; i++) printf("%s ",nameptr[i]);
    printf("\n");
   
	/*end_edit*/
}
void readNames(char nameptr[][80], int *size)
{
	/*edit*/
   /* Write your program code here */
    printf("Enter size:\n");
    scanf("%d",size);
    int i;
    printf("Enter %d names:\n", size);
    for(i = 0; i<size; i++)scanf("%s",nameptr[i]);
	/*end_edit*/
}
int findTarget(char *target, char nameptr[][80], int size)
{
	/*edit*/
   /* Write your program code here */
    int i;
    for(i = 0; i<size; i++){
        if(strcmp(target,nameptr[i])!=0) continue;
        return i;
    }
    return -1;

	/*end_edit*/
}