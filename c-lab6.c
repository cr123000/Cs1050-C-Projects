//Charlie Richardson, cjr444/18188253,CS1050,Lab6(HW 1)
#include<stdio.h>
void GetInput(char String[],int Array[]);
void PrintOutput(char String[256],int Array[256]);
int main(){
    int Array[256];
    char String[256];
    printf("*********************\n");
    printf("*Welcome to Lab 6   *\n");
    printf("*********************\n");
    GetInput(String,Array);
    PrintOutput(String,Array);
    return 0;
}
void GetInput(char String[],int Array[]){
    printf("\nPlease enter a string: ");
    scanf("%[^\n]",String);
    printf("\nPlease Enter possitive intergers, and -1 to end\n");
    for(int i= 0;Array[i-1]!=-1;i++){
        printf("\tElement #%d= ",i);
        scanf("%d",&Array[i]);
    }
 }
void PrintOutput(char String[256],int Array[256]){
    printf("\n*********************\n");
    printf("The String You entered: \n");
    printf("%s\n",String);
    printf("Array elements you entered:\n");
    for(int i=0;Array[i]!=-1;i++){
        printf("\tarray[%d]=%d\n",i,Array[i]);
    }
}
