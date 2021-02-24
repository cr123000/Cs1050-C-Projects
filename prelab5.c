#include<stdio.h>
void PrintArray(int array[], int size);
int initializeArray(int array[], int begin, int end, int incriment);
int main(){
    int array[255];
    initializeArray(array,2,20,2);
    printf("First Array: \n");
    PrintArray(array,10);
    printf("Second Array: \n");
    initializeArray(array,1,97,3);
    PrintArray(array,33);
}
int initializeArray(int array[],int begin,int end,int incriment){ 
    for(int i=0;i<end-1;i++){
    array[i]=begin+(i*incriment);
    } 
    return 0;
}
void PrintArray(int array[],int size){
    for(int i=0;i<size;i++){
    printf("\tElement %d = %d\n",i,array[i]); 
    }
}
