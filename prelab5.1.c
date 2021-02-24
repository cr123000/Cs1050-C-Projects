#include<stdio.h>
#define data {{72,68,62},{95,88,95},{93,97,86},{98,77,98},{99,92,90},{47,32,27},{97,99,85},{85,95,91},{76,82,98}}
#define COLS 3
#define ROWS 9
void Print2dArray(int array[][COLS], int rows);
int PrintRowAverage(int array[][COLS],int whichrow);
int PrintColAverage(int array[][COLS],int whichcol);
int main(void){
    int array[][COLS]=data; 
    printf("Here's the Matrix:\n");
    Print2dArray(array,ROWS);
    printf("Here are the row averages\n");
    for(int i=0;i<ROWS;i++){
        PrintRowAverage(array,i);
    }
    printf("Here are the collum averages\n");
    for(int i=0;i<COLS;i++){
        PrintColAverage(array,i);
    }
}
void Print2dArray(int array[][COLS],int rows){
    for(int i=0;i<rows;i++){
        printf("\tRow %d: %d %d %d\n",i,array[i][0],array[i][1],array[i][2]);
    }
}
int PrintRowAverage(int array[][COLS],int whichrow){
    double  tot=0;
    for(int i=0;i<COLS;i++){
    tot+=array[whichrow][i];
    }
    double avg= tot/COLS;
    printf("\tAverage of row %d = %f\n",whichrow,avg);
    return 0;
}
int PrintColAverage(int array[][COLS],int whichcol){
    double tot=0;
    for(int i=0;i<ROWS;i++){
    tot+=array[i][whichcol];
    }
    double avg = tot/ROWS;
    printf("\tAverage of col %d = %f\n",whichcol,avg);
    return 0;
}
