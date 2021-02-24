//Charlie Richardson cjr444 18188253 CS1050 Lab8
#include <stdio.h>
#include <ctype.h>
#define DIGITTEST1 "12345abcd67890"
#define DIGITTEST2 "1234567890"
#define LOWERTEST1 "hifromJimRies"
#define LOWERTEST2 "hifromjimries"
#define UPPERTEST1 "JIMRIESWASHERE"
#define UPPERTEST2 "JIMRIESWASHERe"
#define ONEMORETEST "9jimr"
//Max sized string
#define MAXSIZE 256
void PrintCategory(char *s);
int main(void){
    PrintCategory(DIGITTEST1);
    PrintCategory(DIGITTEST2);
    PrintCategory(LOWERTEST1);
    PrintCategory(LOWERTEST2);
    PrintCategory(UPPERTEST1);
    PrintCategory(UPPERTEST2);
    PrintCategory(ONEMORETEST);
}
void PrintCategory(char *s){
    int Digits,Letters,Upper,Lower=0;
    for(int i=0;i<MAXSIZE;i++){
        //counts character types in string
        if(*(s+i)!='\0'){
            printf("%c",*(s+i));
            if(isdigit(*(s+i))){
                Digits++;
                continue;
            }
            if(isalpha(*(s+i))){
                Letters++;
            }      
            if(isupper(*(s+i))){
                Upper++;
                continue;
            }
            if(islower(*(s+i))){
                Lower++;
                continue;
            }
        }   
        //tests type count to determine what is in the string
        if(*(s+i)=='\0'){
            if(Digits!=0 && Letters==0){
                printf(" is all digits.\n");
                break;
            }
            if(Digits!=0 && Letters!= 0){
                printf(" is a mix of various types of characters.\n");
                break;
            }
            if(Digits==0 && Upper!=0 && Lower== 0){
                printf(" is all upper case.\n");
                break;
            }
            if(Digits==0 && Upper==0 && Lower!=0){
                printf(" is all lower case.\n");
                break;
            }
            if(Digits==0 && Upper!=0 && Lower!=0){
                printf(" is a mix of upper and lower case letters.\n");
                break;
            }
        }
    }
}
