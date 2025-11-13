#include<stdio.h>
#include<string.h>
int main (){
int i;
int s1[100];
int a_count =0 ;
int e_count =0 ;
int o_count =0 ;
int u_count =0;
int i_count =0 ;
int leng ;
printf(" enter the word :");
scanf("%s", s1) ;
leng =strlen(s1) ;
for(i=0;i<leng;i++){
    if(s1[i]=='a'){
        a_count++;
    }
     if(s1[i]=='e'){
        e_count++;
    }
     if(s1[i]=='i'){
        i_count++;
    }
     if(s1[i]=='o'){
        o_count++;
    }
     if(s1[i]=='u'){
        u_count++;
    }
}
printf("count of a in the word is %d\n", a_count);
printf("count of e in the word is %d\n", e_count);
printf("count of i in the word is %d\n", i_count);
printf("count of o in the word is %d\n", o_count);
printf("count of u in the word is %d\n", u_count);
return 0;


}
