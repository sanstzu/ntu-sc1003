	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[20];
   int telno;
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);
int main()
{
   PhoneBk s[MAX];
   char t[20], *p;
   int size=0, choice;
   char dummychar;
    
   printf("Select one of the following options: \n");
   printf("1: readin()\n");     
   printf("2: search()\n");
   printf("3: printPB()\n");
   printf("4: exit()\n");      
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:    
            scanf("%c", &dummychar);       
            size = readin(s); 
            break;
         case 2: 
            scanf("%c", &dummychar);  
            printf("Enter search name: \n");
            fgets(t, 20, stdin);  
            if (p=strchr(t,'\n')) *p = '\0';
            search(s,size,t);                   
            break;
         case 3: 
            printPB(s, size);
            break;         
      }
   } while (choice < 4);
   return 0;
}
void printPB(PhoneBk *pb, int size) 
{
	/*edit*/
	/* Write your code here */
    printf("The phonebook list:\n");
    if(size == 0){
        printf("Empty phonebook\n");
        return;
    }
    int i;
    for(i = 0; i < size; i++){
        printf("Name: %s\nTelno: %d\n", pb[i].name, pb[i].telno);
    }


	/*end_edit*/
}
int readin(PhoneBk *pb)
{
	/*edit*/
	/* Write your code here */
    char t_name[20];
    char *p;
    int t_phone;
    int ctr = 0;
    do {
        printf("Enter name:\n");
        scanf("\n");fgets(t_name,20,stdin);
        if(p = strchr(t_name,'\n')) *p ='\0';
        if(t_name[0] == '#') break;
        printf("Enter tel:\n");
        scanf("\n");scanf("%d",&t_phone);
        
        strcpy(pb[ctr].name,t_name);
        pb[ctr++].telno = t_phone;
    } while (69);
    return ctr;
	/*end_edit*/
}
void search(PhoneBk *pb, int size, char *target)
{
	/*edit*/
	/* Write your code here */
    if(size == 0){
        printf("Empty phonebook\n");
        return;
    }
    int i; int found = 0;
    for(i = 0; i < size && !found; i++){
        if(strcmp(pb[i].name,target)==0){
            found = 1;
            printf("Name = %s, Tel = %d\n", pb[i].name, pb[i].telno);
        }
    }
    if(!found) printf("Name not found!\n");

	/*end_edit*/
}