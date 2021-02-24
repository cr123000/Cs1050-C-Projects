#include<stdio.h>
//initites main function
int main(){
    //initiates variables
    int b,x,y,z,a,c,d;
    //sets testing variable
    z=1; 
    //gets start value, tests to see if it is between 1 and 100
    for(a=0;a<z;a=a+0){
    printf("Enter start: ");
    scanf("%d",&x);
    (x>100||x<1)?printf(""):a++;
    }
    //gets limit value, tests if it is between 1 and 100
    for(b=0;b<z;b=b+0){
    printf("Enter limit: ");
    scanf("%d",&y);
    (y>100||y<1)?void:b++;
   }
   //gets incriment value, tests logic
    for(c=0;c<z;c=c+0){
        printf("Enter incriment: ");
        scanf("%d",&a);
        (x<y)?(a<=0)?void:c++:void;
        (x>y)?(a>=0)?void:c++:void;
    }
    for(d=x;d<=y;d=d+a){
        printf("%d ",d);
    }
    for(d=x;d>=y;d=d+a){
        printf("%d ",d);
    }
    printf("\n");
}


