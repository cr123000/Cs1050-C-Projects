#include<stdio.h>
int main(){
    int x,y,z,a;
    printf("how many numbers would you like?\n");
    scanf("%d",&y);
    printf("what would you like to incriment of numbers to be?\n");
    scanf("%d",&z);
    printf("What would you like to divisor tested to be?");
    scanf("%d",&a);
    for(x=1;x<=y;x=x+z){
    printf("%d",x);
    (x%a==0)?printf(" is divisable by 5\n"):printf(" is not divisable by 5\n");
}
}
