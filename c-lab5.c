//Charlie Richardson,cjr444,Lab 5
#include<stdio.h>
void SumArrays(int array1[],int array2[],int arrayOut[],int size);
void initializeArray(int array[], int begin, int end, int incriment);
void printArrays(int array1[],int array2[],int size1,int size2);
void printOutArrays(int arrayOut[],int size);
//main function declares arrays, calls functions
int main(){
    int array1[256],array2[256],arrayOut[256];
    initializeArray(array1,2,20,2);
    initializeArray(array2,4,40,4);
    SumArrays(array1,array2,arrayOut,10);
    printf("First Input Arrays:\n");
    printArrays(array1,array2,10,10);
    printf("First Output Array:\n");
    printOutArrays(arrayOut,10);
    initializeArray(array1,30,0,-3);
    initializeArray(array2,99,9,-9);
    printf("Second Input Arrays: \n");
    printArrays(array1,array2,11,11);
    SumArrays(array1,array2,arrayOut,10);
    printf("Second Output Array:\n");
    printOutArrays(arrayOut,11);
    printf("Third Input Array:\n");
    initializeArray(array1,15,1,-1);
    initializeArray(array2,5,50,5);
    printArrays(array1,array2,15,10);
    SumArrays(array1,array2,arrayOut,10);
    printf("Third Output Array:\n");
    printOutArrays(arrayOut,10);
}
//initializes arrays, adding numbers to their elements in the string
void initializeArray(int array[],int begin,int end,int incriment){ 
    if(end>begin){
        for(int i=0;i<end;i++){
            array[i]=begin+(i*incriment);
        }
    } 
    else{
        for(int i=0;i<begin;i++){
            array[i]=begin+(i*incriment);
        }
    }
}
//Adds arrays together, puts them into a 3rd string
void SumArrays(int array1[],int array2[],int arrayOut[],int size){
    for(int i=0;i<size+1;i++){
        arrayOut[i]=array1[i]+array2[i];
    }
}
//Prints the Input Arrays
void printArrays(int array1[],int array2[],int size1,int size2){
    if(size1==size2){
        for(int i=0;i<size1;i++){
            printf("\tArray 1 Element %d = %2d  ",i,array1[i]);
            printf("Array 2 Element %d = %2d\n",i,array2[i]);
        }
    }
    if(size1>size2){
        for(int i=0;i<size2;i++){
            printf("\tArray 1 Element %d = %2d  ",i,array1[i]);
            printf("Array 2 Element %d = %2d\n",i,array2[i]);
        }
        for(int i=size2;i<size1;i++){
            printf("\tArray 1 Element %d = %2d\n",i,array1[i]);
        }
    }
}
//Prints Output arrays
void printOutArrays(int arrayOut[],int size){
    for(int i=0;i<size;i++){
        printf("\tArray 1 Element %d = %d\n",i,arrayOut[i]);
    }
}
