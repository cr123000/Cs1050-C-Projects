#include<stdio.h>
int GetString(char string[]){
    printf("input string");
    scanf("%s",string);
    return 0;
}
int main(){
    char string[256]={0};
   GetString(string);
    printf("%s",string);
}
