#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR 100

//testa
const int MAX = 5;
typedef struct {
    int roomID;
    int status;
    char customerName[MAX_STR];
} Room;


void initialize(Room arr[]){
    int i;
    for(i = 0; i<MAX; i++){
        arr[i].roomID = i+1;
        arr[i].status = 0;
    }
}

int occupiedCount(Room arr[]){
    int i;
    int cnt;
    cnt = 0;
    for(i = 0; i<MAX; i++) cnt += arr[i].status;
    return cnt;
}


void listOccupiedRooms(Room arr[]){
    int i;
    if(occupiedCount(arr)== 0){
        printf("The hotel is empty\n");
    } else {
        for(i = 0; i<MAX; i++) if(arr[i].status)
        printf("roomID: %d\ncustomer name: %s\n",i+1,arr[i].customerName);
    }
}

void assignRoom(Room arr[]){
    int i, inp;
    char cs_name[MAX_STR],*p;
    if(occupiedCount(arr)==MAX){
        printf("The hotel is full\n");
    } else {
        do {
            printf("Enter a roomID between 1 and 5:\n");
            scanf("\n");
            scanf("%d",&inp);
            if(inp < 1 || inp > MAX) continue;
            else if(arr[inp-1].status) printf("Occupied! Enter another roomID\n");
            else break;
        } while(1);
        printf("Enter customer name:\n");
        scanf("\n");
        fgets(arr[inp-1].customerName, 20, stdin);
        if(p = strchr(arr[inp-1].customerName,'\n')) *p ='\0';
        arr[inp-1].status = 1;
        printf("The room has been assigned successfully\n");
    }
}

void removeRoom(Room arr[]){
    int i, inp;
    if(occupiedCount(arr)==0){
        printf("All the rooms are empty\n");
    } else {
        do {
            printf("Enter a roomID between 1 and 5:\n");
            scanf("\n");
            scanf("%d",&inp);
            if(inp < 1 || inp > MAX) continue;
            else if(!arr[inp-1].status) printf("Empty! Enter another roomID for removal\n"); 
            else break;
        } while(1);
        arr[inp-1].status = 0;
        printf("Removal is successful\n");
    }
}

void findCustomer(Room arr[]){
    int i;
    char inp[MAX_STR], *p;
    printf("Enter customer name:\n");
    scanf("\n");
    fgets(inp, 20, stdin);
    if(p = strchr(inp,'\n')) *p ='\0';
    p = inp;
    while(*p != '\0'){
        *p = tolower(*p);
        p++;
    }

    char csname[20];

    for(i = 0 ;i < MAX; i++){
        char csname[MAX_STR];
        strcpy(csname,arr[i].customerName);
        p = csname;
        while(*p != '\0'){
            *p = tolower(*p);
            p++;
        }
        if(arr[i].status && strncmp(inp,csname,20)==0){
            printf("The target customer name is found\n");
            printf("roomID: %d\ncustomer name: %s\n",i+1,arr[i].customerName);
            return;
        }
    }
    printf("The target customer name is not found\n");
}

int main(){
    int user_input,i;
    Room arr[MAX];
    initialize(arr);
    char func_names[5][100] = {"listOccupiedRooms()","assignRoom()","removeRoom()","findCustomer()","quit"};
    printf("NTU HOTEL ROOM RESERVATION PROGRAM:\n");
    for(i=0; i<5; i++) printf("%d: %s\n", i+1, func_names[i]);
    while(1){
        printf("Enter your choice:\n");
        scanf("\n");
        scanf("%d",&user_input);
        if(user_input != 5 && user_input!=69) printf("%s:\n",func_names[user_input-1]);
        switch(user_input){
            case 1:
               listOccupiedRooms(arr); 
               break;
            case 2:
                assignRoom(arr);
                break;
            case 3:
                removeRoom(arr);
                break;
            case 4:
                findCustomer(arr);
                break;
            case 5:
                return 0;
        }
    }
}