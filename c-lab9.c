//charlie richardson cjr444 18188253 lab9
#include <stdio.h>
#include<stdlib.h>
#include <fight.h>
void Fight( char * combatant1, int ac1, int hp1,int hitbonus1, int damagebonus1,char * combatant2,int ac2, int hp2, int hitbonus2,int damagebonus2);
int main(int argc, char * argv[]){
    char holder;
   holder =*(argv+1);
    char holder2;
   holder2 =*(argv+2);
    if(argc<2){
        printf("./a.out filename filename2\n");
        return -1;
    }
    char filename[]={"ahote.dat" };
    if(holder!=filename){
        printf("Could not open %s\n",argv[1]);
        return -1;
    }
    char filename2[]={"gary.dat"};
    if(holder2!=filename2){
        printf("Could not open %s\n",argv[2]);
        return -1;
    }
    FILE *fptr1;
    char Name1[256];
    int AC1, HP1, HB1, DB1;
    FILE *fptr2;
    char Name2[256];
    int AC2, HP2, HB2, DB2;
    fptr1 = fopen(*(argv+1),"rb");
    if(!(fptr1 == NULL)){
       fscanf(fptr1,"%s %d %d %d %d",Name1,&AC1,&HP1,&HB1,&DB1);
    }
    fptr2 = fopen(argv+2,"rb");
    if(!(fptr2 == NULL)){
       fscanf(fptr2,"%s %d %d %d %d",Name2,&AC2,&HP2,&HB2,&DB2);
    }
    else{
        printf("your files are empty");
    }
    printf("Name=%s,AC=%d,HP=%d,ToHitBonus=%d,DamageBonus=%d\n",Name1,AC1,HP1,HB1,DB1);
    printf("Name=%s,AC=%d,HP=%d,ToHitBonus=%d,DamageBonus=%d\n",Name2,AC2,HP2,HB2,DB2);
    Fight(Name1,AC1,HP1,HB1,DB1,Name2,AC2,HP2,HB2,DB2);
    fclose(fptr1);
    fclose(fptr2);
}
