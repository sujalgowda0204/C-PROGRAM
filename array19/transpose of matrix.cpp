#include<stdio.h>
int main (){
int a1[4][4];
int i,j;
int temp;
for (i=0;i<4;i++){
    for (j=0;j<4;j++){
        printf(" eneter the value of [%d][%d]:", i,j);
        scanf("%d", &a1[i][j]);
    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t",a1[i][j]);
    }
    printf("\n");
}
printf(" transpose of matrix :\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        temp=a1[i][j];
        a1[i][j]=a1[j][i];
        a1[j][i]=temp;

    }
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d\t",a1[j][i]);
    }
    printf("\n");
}
return 0;
}
