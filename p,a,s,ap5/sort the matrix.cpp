#include<stdio.h>
int main (){
int i,j;
int arr[4][4];
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("enter the value of arr[%d][%d]:", i,j);
        scanf("%d", &arr[i][j]);
    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t", arr[i][j]);
    }
    printf("\n");
}
int arr1[16] ;
int k=0;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        arr1[k]=arr[i][j] ;
        k++ ;
    }
}
for(i=0;i<16;i++){
    printf("%d\t", arr1[i]);
}
return 0;

}
