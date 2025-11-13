#include<stdio.h>
int main (){
int i,j;
int arr[4][4],arr1[4][4];
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf(" enter the value of arr[%d][%d]:", i,j);
        scanf("%d", &arr[i][j]);
    }

}
printf("\n");

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf(" enter the value of arr1[%d][%d]:", i,j);
        scanf("%d", &arr1[i][j]);
    }

}
printf("\n");
printf("matrix 1 is :\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t", arr[i][j]);

    }
    printf("\n");
}
printf("\n");
printf("matrix 2 is :\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t", arr1[i][j]);

    }
    printf("\n");
}
int add[4][4];
printf(" addition of two matris is : \n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        add[i][j] = arr[i][j] + arr1[i][j] ;
        printf("%d\t", add[i][j]);
    }
    printf("\n");
}
int sub[4][4];
printf(" subration of two matris is : \n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        sub[i][j] = arr[i][j] - arr1[i][j] ;
        printf("%d\t", sub[i][j]);
    }
    printf("\n");
}
printf("\n");
printf(" product of two mattrix is :\n");
int prod[4][4];
int k ;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
            prod[i][j]=0 ;
        for(k=0;k<4;k++){
            prod[i][j] += arr[i][k] * arr1[k][j];

        }
    printf("%d\t", prod[i][j]);
    }
    printf("\n");
}

return 0;
}
