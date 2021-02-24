//Charlie richardson cjr444 18188253 cs1050 lab8
#include <stdio.h>
#include <ctype.h>
#define MAXSTRINGSIZE 200
void ShowWords(char * string){
    int count=1;
    printf("Word #1=");
    for(int i=0;i<=MAXSTRINGSIZE;i++){
        if(*(string+i)!='\0'){
            if(isspace(*(string+i)) || ispunct(*(string+i))|| iscntrl(*(string+i))){
                if(isspace(*(string+i-1)) || ispunct(*(string+i-1))|| iscntrl(*(string+i-1))){     
                    continue;
                }
                else{
                    count++;
                    if(*(string+i+1)!='\0'){
                        printf("\nword #%d=",count);
                    }
                    continue;
                }      
            }
            else{
                printf("%c",*(string+i));
            }
        }
        else{
            break;
        }
    }
    printf("\n");
}
