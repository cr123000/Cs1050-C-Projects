#include<stdio.h>
#include<math.h>

double log16(int y){
    return log(y)/log(16);


}
int main(void){
    int i,gp;
    double g;
    for(i=0;i<=12;i++){
        g=pow(2,i);
        gp=g;
        printf("log base 16 of %d is %f\n",gp,log16(g));
    }
}
