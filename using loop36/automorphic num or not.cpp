#include<stdio.h>
int main (){
int a,n,s,o,t,c=0;
printf(" enter the number:");
scanf("%d", &a);
n=a*a ;
s=n;
o=a;
for(int i=0;i<100;i++){
    if(a!=0){
        a=a/10;
        c++;
    }
}
for(int i=0;i<c;i++){
    n=n/10 ;
    }
for (int i=0;i<c;i++){
    n=n*10 ;
}
t=s-n ;
if(t==o){
    printf(" the number %d is a automorpic number ", o);
}
else{
     printf(" the number %d is not a automorpic number ", o);
}

return 0;



}


