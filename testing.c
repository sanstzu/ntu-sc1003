#include <stdio.h>
#include <string.h>
#define print(x) printf("%s",x)

int main(){
    char inp[20];
    printf("Enter customer name:\n");
    fgets(inp, 20, stdin);
    printf("%s", inp);
}