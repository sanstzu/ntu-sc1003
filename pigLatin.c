	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 80
void PigLatin(char *eword, char *PLword);
int main()
{
   char eword[MAX_SIZE];
   char PLword[MAX_SIZE];

   printf("Enter your English word: \n");
   scanf("%s", eword);
   PigLatin(eword, PLword);
   printf("PigLatin(): %s\n", PLword);
   return 0;
}
void PigLatin(char *eword, char *PLword)
{
	/*edit*/
/* Write your code here */
    char *ptr;
    int cnt = 0;
    ptr = eword;
    while(*ptr !=  'a' && *ptr != 'e' && *ptr != 'i' && *ptr != 'o' && *ptr != 'u' && *ptr!='y' && *ptr!='\0'){
        ptr++;
        cnt++;
    }
    if(*eword !=  'a' && *eword != 'e' && *eword != 'i' && *eword != 'o' && *eword != 'u' && *eword!='y' && *eword!='\0'){
        strcpy(PLword, ptr);
        *ptr = '\0';
    } else {
        *PLword = '\0';
    }
    
    strncat(PLword,eword,strlen(eword));
    strncat(PLword,"ay",2);


	/*end_edit*/
}