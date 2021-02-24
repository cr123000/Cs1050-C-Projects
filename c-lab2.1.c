#include<stdio.h>
//main function
int main()
{
 //declare variables
    int x;
    //set counter variable
    x=25;
    //loop
    while (x>=5){
        //printing number
        printf("%d",x);
        //testing logic
        if(x%2==0&&x%3!=0){
            printf(" divisible by 2");
        }
        if(x%3==0&&x%2!=0){
           printf(" divisible by 3");
          }
        if(x%2==0&&x%3==0){
            printf(" divisible by 2,3");
        }
        x-=1;
        printf("\n");
    } 
}
 

