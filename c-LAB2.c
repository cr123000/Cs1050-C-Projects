#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("Insert 4 interger values on the same line seperated by a space\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("*** Initial Values ***\n");
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    printf("*** Calculated values ***\n");   
    printf("The product of A and B=%d\n",a*b);
    printf("The sum of C and D=%d\n",c+d);
    printf("The interger quotient of A divided by C=%d\n",a/c);
    printf("The interger Remainder of A divided by C=%d\n",a%c);
    printf("The product of A and C divided by the sum of B and D=%d\n",(a*c)/(b*d));
    printf("*** Bonus ***\n");
    int e;
    e=a;
    if (b>e){
    e=b;
    }
    if (c>e){
    e=c;
    }
    if (d>e){
    e=d;
    }
    printf("The largest value is %d\n",e);
    int f;
    f=a;
    if (b<f){
    f=b;
    }
    if (c<f){
    f=c;
    }
    if (d<f){
    f=d;
    }
    printf("The smallest value is %d\n",f);
    printf("The smallest times the largest=%d\n",f*e);

}
