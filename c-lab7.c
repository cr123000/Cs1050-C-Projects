//Charlie Richardson cjr444 18188253 cs1050 lab7
#include<stdio.h>
void GetString(char string[]);
void PrintString(char string[]);
void ReverseString(char string[]);
void PrintModified(char string[]);
int main(){
    char string[256];
    char *p= &string[0];
    printf("*** Welcome to lab 7 ***\n");  
    GetString(p);  
    PrintString(p);
    ReverseString(p);
    PrintModified(p);
    printf("\nThank you for using lab7\n");
 }

void GetString(char string[]){
    printf("please enter a string: ");
    scanf("%s",string);
}
void PrintString(char p[]){
    int count;
    count=0;
    printf("you entered: ");
    for(int i=0;i!=254;i++){
    char ch=*(p+i);
    if(ch=='\0'){
        break;
    }
    else{
    printf("%c",ch);
    count++;
    }
    }
 }
void ReverseString(char p[]){
    char Holder1;
    char Holder2;
    char Holder3;
    int count=0;
    for(int i=0;i!=254;i++){
    char ch=*(p+i);
    if(ch=='\0'){
        break;
    }
    else{
     count++;
    }
    }
        printf("\nThere are %d segmants in the string.\n",(count/3)+1);

    if(count%3==0){   
    for(int i=0;i<256;i=i+3){
    Holder1=*(p+i);
    Holder2=*(p+i+1);
    Holder3=*(p+i+2);
    
    if(Holder1=='\0'){
        break;
        }
    if(Holder2=='\0'){
        break;
        }
    if(Holder3=='\0'){
        break;
        }
    *(p+i)=Holder3;
    *(p+i+2)=Holder1;
    }
}
    if(count%3==2){
    for(int i=0;i<(count-2);i=i+3){
    Holder1=*(p+i);
    Holder2=*(p+i+1);
    Holder3=*(p+i+2);
    
    if(Holder1=='\0'){
        break;
        }
    if(Holder2=='\0'){
        break;
        }
    if(Holder3=='\0'){
        break;
        }
    *(p+i)=Holder3;
    *(p+i+2)=Holder1;
 }
    Holder1=*(p+(count-2));
    Holder2=*(p+(count-1));
    *(p+(count-2))=Holder2;
    *(p+(count-1))=Holder1;
 }   
    if(count%3==1){
    for(int i=0;i<(count-1);i=i+3){
    Holder1=*(p+i);
    Holder2=*(p+i+1);
    Holder3=*(p+i+2);
    
    if(Holder1=='\0'){
        break;
        }
    if(Holder2=='\0'){
        break;
        }
    if(Holder3=='\0'){
        break;
        }
    *(p+i)=Holder3;
    *(p+i+2)=Holder1;
 }
 }
}
void PrintModified(char p[]){
    printf("modified string: ");
    for(int i=0;i!=254;i++){
    char ch=*(p+i);
    if(ch=='\0'){
        break;
    }
    else{
    printf("%c",ch);
    
    }
    }
}
