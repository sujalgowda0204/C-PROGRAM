#include<stdio.h>
int main(){
int a1[]={34,23,11,36,78,98};
int n;
n = sizeof(a1)/sizeof(a1[0]);
int i;
int temp;
for(i=0;i<n;i++){
    temp=a1[i];
    a1[i]=a1[n-i-1];
    a1[n-i-1]=temp ;
    }
for(i=0;i<n;i++){
    printf("%d\t", a1[n-1-i]);
}

return 0;

}
