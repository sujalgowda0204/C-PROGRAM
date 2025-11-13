#include<stdio.h>
#include<string.h>
int main (){
char _string[100] ;
int length ;
int i ;
printf(" enter the word ");
scanf("%s", &_string);
length =strlen(_string);
for(i=0;i<length;i++){
    if(_string[i]>=97 && _string[i]<=122){
        _string[i]=_string[i] - 32 ;
    }
    else{
        _string[i]= _string[i] + 32;
    }
}

printf("the word in toggel case :%s", _string);
return 0;



}
