//Charlie Richardson,18188253,cjr444,cs1050,Lab 5.1
//declares constants
#include<stdio.h>
//student grade data
#define sdata {{72,68,62},{95,88,95},{93,97,86},{98,77,98},{99,92,90},{47,32,27},{97,99,85},{85,95,91},{76,82,98}}
#define SCOLS 3
#define SROWS 9
//Grade cut off data
#define cdata {{90,80,70,60},{85,75,60,50},{90,70,50,40}}
#define CCOLS 4
#define CROWS 3
void Print2dArray(int cols, int array[][cols], int rows);//Prints an array
void PrintGrades(int cols,int rows,int array[][cols],int cols2,int rows2,int array2[][cols2]);//Prints grades, using 2 arrays
int main(void){
    int array[][SCOLS]=sdata; 
    int carray[][CCOLS]=cdata;
    printf("Here are the scores:\n");
    Print2dArray(SCOLS,array,SROWS);
    printf("Here are the grade cuttoffs:\n");
    Print2dArray(CCOLS,carray,CROWS);
    printf("Here are the grades:\n");
    PrintGrades(SCOLS,SROWS,array,CCOLS,CROWS,carray);

}
void Print2dArray(int cols,int array[][cols],int rows){
    for(int i=0;i<rows;i++){
        printf("\tRow %d: ",i);
        for(int x=0;x<cols;x++){
            printf("%d ",array[i][x]);
        }
        printf("\n");
    }    
}
void PrintGrades(int cols,int rows,int array[][cols],int cols2,int rows2,int array2[][cols2]){
    for(int x=0;x<rows;x++){
       printf("\tStudent %d: ",x);
       for(int i=0;i<cols;i++){
            if(array[x][i]>=array2[i][0]){
                printf("A ");
                continue;
        }
            if(array[x][i]>=array2[i][1]){
                printf("B ");
                continue;
        }
            if(array[x][i]>=array2[i][2]){
                printf("C ");
                continue;
        }
            if(array[x][i]>=array2[i][3]){
                printf("D ");
                continue;
        }
            else{
                printf("F ");
        }
        }
        printf("\n");
}
}
