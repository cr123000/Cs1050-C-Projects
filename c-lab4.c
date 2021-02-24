//get needed libraries
#include<stdio.h>
#include<math.h>
double logAny(double x,double b);
int main(void){
    //initialzing variables
    int power1,base,inumber,ibase;
    double g,g2,answer;
   for(power1=0;g<=4096;power1++){
        g=pow(2,power1);
        inumber=g;
        printf("Number %d:\n",inumber);
        for(base=1,g2=0;g2<32;base++){
        g2=pow(2,base);
        ibase=g2;
       //runs other function in order to get answer
       answer=logAny(g,g2);
        printf("\tlog base %d = %f\n",ibase,answer);

     }   
    }
}
  //takes values of inumber and ibase and outputs a double for the answer value
  double logAny(double x,double b){
        return log(x)/log(b);
}

